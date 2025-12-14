/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202547
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
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_15 ^= ((/* implicit */int) min((((((/* implicit */_Bool) ((unsigned short) 1099511627775LL))) ? ((+(arr_3 [i_0] [(signed char)9]))) : (arr_2 [i_0]))), (arr_1 [2])));
                var_16 ^= ((/* implicit */long long int) (~(((-1192121703) ^ (((/* implicit */int) (signed char)1))))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    arr_7 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) 4265060571U)), (max((max((-1697756308389514329LL), (((/* implicit */long long int) (signed char)-122)))), (((/* implicit */long long int) ((short) 536870910U)))))));
                    var_17 &= ((/* implicit */long long int) var_13);
                    var_18 ^= ((/* implicit */short) max((((min((-6030342728886456267LL), (9223372036854775807LL))) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53913))))), (((((/* implicit */_Bool) -1470991071243396890LL)) && (((/* implicit */_Bool) 6030342728886456266LL))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (long long int i_4 = 4; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_1] [i_0] [i_3] [i_4] = ((((/* implicit */_Bool) ((long long int) arr_11 [i_0] [5LL] [(unsigned char)1] [i_0] [i_2] [(short)9] [11LL]))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_3] [i_2] [i_2] [i_0] [i_3] [i_1 - 1] [i_2])), (arr_9 [i_0] [i_0]))))) : (((long long int) arr_1 [i_0])));
                                var_19 &= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [9LL] [i_4])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) && (((((/* implicit */_Bool) arr_3 [i_1] [i_2])) || (((/* implicit */_Bool) arr_11 [i_0] [i_0] [6] [i_3] [i_0] [i_0] [i_0])))))))));
                                arr_13 [i_4] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) var_1);
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) arr_1 [i_0]);
                }
                for (long long int i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                {
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 524287U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_9 [i_1] [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_14 [i_0] [i_0]), (arr_14 [i_0] [i_0]))))) : (arr_6 [i_1 + 2] [i_0] [i_5] [i_0])));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (var_4)));
                    var_23 = ((/* implicit */long long int) max(((-((~(2681976819U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_5 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 + 2])) : (1487885417))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 1; i_6 < 9; i_6 += 3) 
                    {
                        for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                        {
                            {
                                var_24 &= ((/* implicit */long long int) 1487885417);
                                var_25 = ((/* implicit */long long int) var_7);
                            }
                        } 
                    } 
                }
                for (long long int i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
                {
                    arr_24 [i_0] [i_0] [i_0] [i_8] = ((unsigned char) var_3);
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)121)))))) + (((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)13551)))))))) ? (max((arr_21 [10LL] [(signed char)5] [10LL] [(unsigned char)4] [i_8] [i_0] [i_8]), (min((2147483647), (((/* implicit */int) (signed char)96)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 6886734068124893424LL)) ? (var_9) : (arr_6 [i_8] [i_8] [i_1] [i_0])))))))));
                    var_27 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0])) ? (arr_10 [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1] [i_0]) : (((/* implicit */int) var_11)))));
                }
                arr_25 [i_0] [4LL] &= ((/* implicit */unsigned int) (-((-(((/* implicit */int) arr_22 [i_1 - 1] [i_1] [i_0]))))));
            }
        } 
    } 
    var_28 = 9223372036854775807LL;
}
