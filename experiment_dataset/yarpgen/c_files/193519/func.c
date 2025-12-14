/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193519
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
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            {
                var_20 |= ((/* implicit */unsigned long long int) ((((long long int) -1LL)) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))))))));
                arr_5 [i_0 - 1] [(short)16] |= ((/* implicit */unsigned long long int) ((long long int) arr_1 [i_0 + 3]));
            }
        } 
    } 
    var_21 = ((/* implicit */long long int) min((var_3), (((/* implicit */short) var_4))));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 1) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned char i_5 = 3; i_5 < 9; i_5 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 2) 
                            {
                                arr_18 [i_2] [i_2] [(short)10] [(short)10] [i_4] [8ULL] [i_6] = ((/* implicit */unsigned short) (_Bool)1);
                                arr_19 [9LL] [(unsigned char)10] [i_2] [9LL] = ((/* implicit */short) max((((((/* implicit */int) (unsigned short)800)) >> (((((/* implicit */int) arr_13 [i_2] [(unsigned char)3] [i_2 + 1] [i_2])) - (99))))), (((/* implicit */int) arr_13 [i_2 + 1] [9LL] [i_2 + 1] [i_2]))));
                                var_22 += ((/* implicit */unsigned short) var_11);
                                var_23 -= ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_14 [i_2] [i_3] [i_6 - 2] [(_Bool)1]))))));
                            }
                            arr_20 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)20157))))) || (((/* implicit */_Bool) ((long long int) (short)432)))));
                            var_24 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) % (min((arr_12 [i_5 - 1] [i_5 - 1] [i_2 - 2] [i_3 - 1]), (((/* implicit */unsigned long long int) (signed char)31)))));
                        }
                    } 
                } 
                arr_21 [i_2] = ((/* implicit */_Bool) var_16);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (signed char i_8 = 1; i_8 < 20; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_9 = 1; i_9 < 19; i_9 += 4) 
                {
                    for (long long int i_10 = 3; i_10 < 19; i_10 += 1) 
                    {
                        {
                            var_25 -= ((/* implicit */unsigned char) max((var_8), (((/* implicit */int) ((short) ((_Bool) arr_27 [i_7] [(short)11] [i_9] [i_10]))))));
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) (+(((/* implicit */int) max((min((arr_28 [(short)16] [(_Bool)1] [(short)16] [15LL]), (((/* implicit */unsigned short) var_4)))), (max((((/* implicit */unsigned short) arr_27 [i_7] [(signed char)17] [i_7] [i_10 + 1])), (var_9)))))))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) var_19))));
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned char) min(((signed char)-32), ((signed char)-1))))));
}
