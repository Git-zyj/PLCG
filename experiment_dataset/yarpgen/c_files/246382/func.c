/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246382
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_13 |= ((/* implicit */signed char) arr_1 [i_0]);
            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 3])) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 - 3]))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 3) 
            {
                {
                    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (unsigned char)49))));
                    arr_10 [i_0] [(_Bool)1] [i_3] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 801736996)) ? (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [i_3]))) : (arr_5 [i_2] [11LL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15)))))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)49)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) var_7)))))));
        arr_12 [i_0 + 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)206)) || (((/* implicit */_Bool) (signed char)-123))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_16 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3399086371465064634ULL)) ? (-67108864) : (413311664)));
        /* LoopNest 3 */
        for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 2) 
                {
                    {
                        var_17 &= ((/* implicit */unsigned int) (((~(6765815908691049699LL))) < (((/* implicit */long long int) (+((-(((/* implicit */int) (signed char)73)))))))));
                        var_18 |= ((/* implicit */int) (-(((((/* implicit */unsigned int) ((/* implicit */int) (short)-23735))) / (var_3)))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_7] [i_7] [i_7])))))))) < (((/* implicit */int) ((unsigned short) (unsigned short)60691)))));
                        var_20 = ((/* implicit */int) max((var_20), ((+(var_10)))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4845)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) min((var_9), ((unsigned char)253)))) : (((((/* implicit */int) (short)-23735)) - (((/* implicit */int) (unsigned char)31))))))));
    }
    var_22 = (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) 2542619835412206404LL)) ? (var_3) : (((/* implicit */unsigned int) -1807154355)))), (((/* implicit */unsigned int) ((unsigned char) var_9)))))));
}
