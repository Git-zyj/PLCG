/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43805
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
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_15 += ((/* implicit */signed char) 1080551073);
                    arr_11 [i_2] [i_2] = ((/* implicit */long long int) ((_Bool) min((((/* implicit */unsigned long long int) ((long long int) var_0))), ((((_Bool)1) ? (arr_0 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
                    arr_12 [i_2] [i_1] [i_1] [10LL] &= ((/* implicit */int) (_Bool)1);
                }
            } 
        } 
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((short) min((((signed char) arr_3 [i_0 + 2])), ((signed char)(-127 - 1))))))));
        /* LoopSeq 1 */
        for (short i_3 = 3; i_3 < 18; i_3 += 4) 
        {
            arr_16 [i_0] [i_3] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((unsigned long long int) var_3))) ? (min((arr_6 [i_0] [i_0] [(signed char)6]), (var_0))) : (((/* implicit */int) (short)21455))))));
            var_17 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) max((((/* implicit */int) var_3)), (arr_13 [10ULL])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) / (var_0)))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (67108862U)))))));
            /* LoopNest 3 */
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                for (int i_5 = 1; i_5 < 18; i_5 += 2) 
                {
                    for (int i_6 = 1; i_6 < 17; i_6 += 2) 
                    {
                        {
                            arr_25 [i_4] [i_3] [i_3] [i_4] |= ((/* implicit */unsigned long long int) (short)-32763);
                            var_18 = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_7 [i_3 - 2] [i_4]))), (((/* implicit */unsigned long long int) ((unsigned int) var_0))))), (((/* implicit */unsigned long long int) var_12))));
                            var_19 = ((/* implicit */unsigned long long int) var_11);
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
            {
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    for (short i_9 = 0; i_9 < 20; i_9 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */short) ((unsigned char) ((unsigned short) (-(((/* implicit */int) var_12))))));
                            arr_34 [i_3] [i_3] = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_7 [i_7] [i_8]))) - (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_26 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_33 [i_0] [i_0] [i_0] [i_0] [(_Bool)1]))) - (min((arr_18 [i_9] [i_8] [i_7] [i_3]), (((/* implicit */long long int) (_Bool)1)))))))));
                        }
                    } 
                } 
            } 
        }
        var_21 = ((/* implicit */long long int) (short)-1951);
    }
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_5)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_14)) : (var_0))) : (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */int) var_1))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */_Bool) 3047175542998080735LL)) ? (var_0) : (((/* implicit */int) var_14)))) : ((~(((/* implicit */int) var_1)))))) : (((int) var_2))));
    var_23 = ((/* implicit */unsigned char) var_2);
}
