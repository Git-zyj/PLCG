/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49072
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
    var_10 = ((/* implicit */_Bool) var_0);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) (signed char)0);
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [(unsigned char)7] = ((/* implicit */int) (!(((/* implicit */_Bool) 408384788))));
                        var_12 = ((/* implicit */_Bool) var_6);
                        arr_11 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) arr_9 [3ULL] [i_1] [i_0] [3ULL])), (((int) var_1))))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) min((arr_4 [i_0] [i_1]), (((((/* implicit */int) (short)-17885)) != (((/* implicit */int) (unsigned char)2)))))))));
                        arr_12 [i_3] [i_0] [i_1] [i_0] [i_0] = arr_4 [i_0] [i_2];
                        var_13 = ((/* implicit */short) -1165252278);
                    }
                    for (int i_4 = 0; i_4 < 23; i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_0] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (signed char)4)) ? (10272543071987431438ULL) : (((/* implicit */unsigned long long int) arr_14 [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (14305896122050191347ULL)));
                        arr_17 [i_0] [i_2] [i_0] [i_0] &= ((/* implicit */unsigned short) 9223372036854775807LL);
                    }
                    for (unsigned char i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned char) ((arr_2 [i_2]) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) <= (((/* implicit */int) (unsigned char)4))))) : (arr_3 [i_1] [i_0])));
                        arr_22 [i_0] [3ULL] = ((/* implicit */unsigned long long int) (signed char)3);
                        var_15 -= 4;
                        var_16 *= ((/* implicit */unsigned char) (short)26732);
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            arr_27 [i_0] [i_0] [i_0] = ((int) arr_0 [i_0] [(unsigned short)16]);
                            arr_28 [i_0] [i_6] = ((unsigned long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-110)), (arr_5 [i_0] [i_2])))) / (min((((/* implicit */unsigned long long int) (short)6466)), (4268126671162094031ULL)))));
                            arr_29 [i_0] [i_1] = ((/* implicit */unsigned char) var_0);
                            var_17 = ((/* implicit */_Bool) -4633003440820226863LL);
                        }
                        for (unsigned int i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_19 [i_0] [2ULL] [i_2] [i_0] [i_7] [i_0])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_5])) ? (((/* implicit */int) (signed char)125)) : (((((/* implicit */_Bool) 9501858914420835903ULL)) ? (((/* implicit */int) arr_1 [i_5] [i_7])) : (((/* implicit */int) (unsigned short)57413)))))))));
                            var_19 = ((/* implicit */signed char) (_Bool)1);
                        }
                    }
                }
            } 
        } 
    } 
}
