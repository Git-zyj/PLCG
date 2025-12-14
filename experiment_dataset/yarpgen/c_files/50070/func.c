/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50070
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
    var_11 = ((/* implicit */long long int) var_0);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_1 - 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 - 1])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) min(((~(max((((/* implicit */unsigned long long int) (unsigned short)19026)), (arr_3 [i_0] [i_1] [i_2]))))), (((((/* implicit */_Bool) arr_1 [i_3])) ? (arr_3 [i_1 + 1] [i_1 - 1] [i_0 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_8 [i_0 - 1] [i_0] [i_2] [i_1] [i_4]), (arr_10 [i_0 - 1] [i_1] [i_2] [i_2] [i_3] [i_4])))))))));
                                arr_12 [i_2] = ((/* implicit */unsigned int) arr_11 [i_0 - 2] [i_2]);
                            }
                        } 
                    } 
                    arr_13 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */long long int) (((((!((_Bool)1))) && (((var_9) && (((/* implicit */_Bool) (unsigned short)46493)))))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) max((max((((/* implicit */unsigned short) var_1)), (arr_0 [i_0 + 1]))), (((/* implicit */unsigned short) ((var_5) == (((/* implicit */unsigned long long int) 0U))))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) ((_Bool) ((long long int) (signed char)-72)));
    /* LoopSeq 1 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        arr_18 [i_5 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_3 [i_5] [i_5 - 1] [i_5 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_16 [i_5 - 1])))) : (max((var_5), (arr_4 [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1])))));
        /* LoopSeq 4 */
        for (short i_6 = 2; i_6 < 20; i_6 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned char) max((1671283189028427531ULL), (((/* implicit */unsigned long long int) (_Bool)1))));
            arr_21 [i_5] [i_6] [i_6] = ((/* implicit */_Bool) arr_19 [i_5 - 1] [i_6 - 1]);
        }
        /* vectorizable */
        for (short i_7 = 2; i_7 < 20; i_7 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 2) 
            {
                arr_28 [i_5] [i_7] [i_8] = (+(var_5));
                var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_24 [i_7 + 1]))));
                arr_29 [i_5] [i_7] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_5 - 1] [i_5 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */_Bool) 1367388449U)) || (((/* implicit */_Bool) 0LL)))))));
            }
            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((signed char) arr_24 [i_5 - 1])))));
            var_17 = ((/* implicit */signed char) (~(15210764268949652204ULL)));
        }
        for (short i_9 = 2; i_9 < 20; i_9 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_10 = 3; i_10 < 17; i_10 += 4) 
            {
                for (short i_11 = 0; i_11 < 21; i_11 += 4) 
                {
                    {
                        arr_38 [i_5] [i_9] [i_9] [i_11] [i_11] [i_9] = ((/* implicit */short) (+(min((arr_32 [i_5 - 1] [i_9]), (((/* implicit */long long int) var_2))))));
                        arr_39 [i_9] = max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)19026)))))))), (var_2));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_17 [i_5 - 1]), (((/* implicit */unsigned long long int) var_4))))) ? (((9223372036854775802LL) << (((((/* implicit */int) arr_8 [i_5 - 1] [i_9 - 1] [i_9] [i_10 + 1] [i_10 - 1])) - (1))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_17 [i_5 - 1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_5 - 1] [i_9 - 1] [i_10 + 4] [i_10 + 1] [i_10 - 1])))))))));
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned long long int) ((((((_Bool) (unsigned short)4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 67108863ULL))))) : (((((/* implicit */int) (signed char)59)) % (((/* implicit */int) (_Bool)1)))))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
            arr_40 [i_5] [i_9 - 1] [i_9] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_36 [i_5] [i_5 - 1] [i_5 - 1] [i_9] [i_9])) != (((/* implicit */int) arr_36 [i_5 - 1] [i_5 - 1] [i_9] [i_9] [i_9])))))));
        }
        for (short i_12 = 2; i_12 < 20; i_12 += 3) /* same iter space */
        {
            arr_43 [i_5 - 1] = (!(((/* implicit */_Bool) var_10)));
            arr_44 [i_12] = ((/* implicit */unsigned short) (+(arr_33 [4ULL] [i_12] [i_5 - 1] [4ULL])));
        }
    }
}
