/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242492
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            var_17 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_0 [i_0])), (min((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31788))) * (arr_1 [i_1])))))));
            var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28086))) : (arr_1 [i_0]))) >= (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_1]) : (arr_1 [i_1 + 4])))));
            var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (((/* implicit */int) (_Bool)0)) : (arr_3 [i_0] [i_1 + 2] [i_1 + 3]))))), (arr_3 [i_1 + 1] [i_0] [i_0])));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (+(((/* implicit */int) var_3)))))));
                        var_21 &= ((/* implicit */short) min((((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (signed char)-66)))) ? ((-(((/* implicit */int) arr_7 [i_0] [i_0] [i_2])))) : (((/* implicit */int) (signed char)-43)))), (arr_3 [i_1] [i_2] [i_1])));
                    }
                } 
            } 
        }
        /* LoopSeq 1 */
        for (signed char i_4 = 1; i_4 < 17; i_4 += 3) 
        {
            arr_11 [i_0] [i_4 + 3] = ((/* implicit */unsigned int) min((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) + (var_9)))) ? ((-(((/* implicit */int) var_4)))) : (arr_3 [i_4 - 1] [(unsigned char)10] [i_4])))));
            arr_12 [i_4] = ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) (unsigned short)0)));
        }
        /* LoopNest 2 */
        for (short i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            for (short i_6 = 2; i_6 < 20; i_6 += 4) 
            {
                {
                    arr_18 [i_5] = ((/* implicit */unsigned short) (!(((_Bool) (signed char)-85))));
                    arr_19 [i_5] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)-85)), (2147483647)))))))));
                    arr_20 [i_0] [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 506531158)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)15737))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned short) (!(((_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (_Bool)1)))))));
}
