/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44395
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
    var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((signed char) var_9)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [(unsigned char)13] [i_0] = ((/* implicit */unsigned int) arr_2 [18] [(short)13]);
                var_15 = ((/* implicit */short) ((unsigned char) ((unsigned long long int) arr_5 [i_0 + 2] [i_0])));
                var_16 = ((/* implicit */long long int) 8102636521544194691ULL);
                arr_7 [i_0] = ((/* implicit */long long int) ((min((((/* implicit */int) (unsigned short)50678)), (((((/* implicit */int) var_2)) - (-1277307093))))) != ((+((+(((/* implicit */int) (unsigned short)50664))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            {
                arr_13 [(unsigned char)8] [i_3] [12LL] = ((/* implicit */unsigned int) (~(max(((-2147483647 - 1)), (((/* implicit */int) (unsigned short)50664))))));
                /* LoopSeq 4 */
                for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                {
                    arr_18 [i_3] [6U] [0LL] [(short)16] = ((/* implicit */unsigned long long int) arr_0 [(signed char)3]);
                    var_17 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14872))) : (var_0))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [i_3])))))), (arr_2 [13LL] [(unsigned char)10])));
                }
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 2) 
                {
                    var_18 += ((/* implicit */unsigned int) (+(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)50669)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)213)))) <= (((/* implicit */int) arr_20 [8U] [14U] [0ULL] [i_5])))))));
                    arr_21 [(signed char)10] [(short)14] [i_3] [8U] = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 5710495643540985921ULL)) ? (12736248430168565695ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [(_Bool)0] [i_3] [0] [(_Bool)1]))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)87)))));
                }
                for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
                {
                    var_19 = ((/* implicit */unsigned short) arr_4 [i_3]);
                    arr_24 [i_3] [5] [(signed char)15] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) 4171287033U)), (arr_16 [(short)0] [8] [(short)9])));
                    arr_25 [(unsigned char)6] [i_3] [i_3] [9U] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_19 [i_3] [i_3])) || (((/* implicit */_Bool) var_9)))) ? (((var_5) % ((~(((/* implicit */int) (signed char)63)))))) : (((((/* implicit */_Bool) ((arr_22 [i_3] [(unsigned short)1] [12U]) - (((/* implicit */int) var_10))))) ? (((((/* implicit */int) var_4)) * (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) 268435328ULL)) ? (1218476471) : (((/* implicit */int) (short)-11561))))))));
                    arr_26 [i_3] = -385770914669037103LL;
                }
                for (unsigned long long int i_7 = 2; i_7 < 17; i_7 += 1) 
                {
                    arr_29 [i_3] [(unsigned char)17] [5U] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 4294967295U)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3]))) | (var_0))))));
                    arr_30 [14U] [i_3] [10U] = ((/* implicit */long long int) var_6);
                }
            }
        } 
    } 
}
