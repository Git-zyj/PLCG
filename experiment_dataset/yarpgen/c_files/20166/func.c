/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20166
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
                {
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (+(((/* implicit */int) (unsigned short)0)))))));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((arr_6 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (-25LL))))))));
                    var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) ((int) (signed char)(-127 - 1)))) ? ((((_Bool)0) ? (var_4) : (var_5))) : ((-(((/* implicit */int) (signed char)0))))))));
                }
                for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    var_20 = ((/* implicit */unsigned short) var_14);
                    var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (~(((/* implicit */int) arr_5 [i_0] [i_0])))))));
                }
                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) arr_9 [i_0] [i_1] [i_0]))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) var_11);
    /* LoopSeq 1 */
    for (short i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        var_24 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) max(((_Bool)1), (arr_5 [i_4] [5LL])))), ((unsigned char)227)))) ? ((-(arr_1 [4]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [14])) + (-2147483635))))))))));
        var_25 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((short) arr_2 [(short)8]))) ? (arr_0 [(_Bool)1] [i_4]) : (((((/* implicit */_Bool) var_8)) ? (0) : (((/* implicit */int) arr_6 [4U])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_4 [(short)12] [i_4]) : (0)))) ? (((int) arr_1 [(short)0])) : (((/* implicit */int) arr_9 [4] [6ULL] [i_4]))))));
        /* LoopNest 3 */
        for (signed char i_5 = 3; i_5 < 15; i_5 += 4) 
        {
            for (int i_6 = 0; i_6 < 16; i_6 += 2) 
            {
                for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    {
                        var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) ((unsigned short) (signed char)127)))));
                        var_27 += ((/* implicit */short) arr_4 [i_7] [(signed char)4]);
                    }
                } 
            } 
        } 
    }
}
