/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46598
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
    /* LoopSeq 3 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_1);
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_13 = ((/* implicit */short) -8979246543575314654LL);
                        arr_9 [i_2] [i_2 + 2] [i_3] [i_2] = ((/* implicit */long long int) var_5);
                        arr_10 [i_3] [i_2 - 1] [i_1 - 2] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_2 - 1] [i_3 - 1] [13LL])) >= (((((((/* implicit */int) arr_5 [i_2 + 2] [i_3 + 1] [i_3])) + (2147483647))) << (((((((/* implicit */int) arr_5 [i_2 + 2] [i_3 + 1] [i_3])) + (22160))) - (4)))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                for (short i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    {
                        var_14 = ((/* implicit */short) ((((((/* implicit */int) arr_5 [i_0] [i_0] [i_5])) + (2147483647))) << (((((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_15 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_0 [i_4]) >= (var_8))))))) - (13134931077704731520ULL)))));
                        arr_16 [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) (!(arr_11 [i_1] [i_1] [(_Bool)1])))), (var_7))))));
                        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) arr_3 [i_0] [i_1]))));
                        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_2)), (max(((~(((/* implicit */int) var_3)))), (((/* implicit */int) (unsigned char)194)))))))));
                    }
                } 
            } 
            arr_17 [(short)7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) ((var_6) | (((/* implicit */unsigned long long int) arr_2 [i_0 + 2] [i_0] [i_0 + 2])))))) >> (((/* implicit */int) var_0))));
        }
        for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (short i_7 = 2; i_7 < 16; i_7 += 4) 
            {
                for (int i_8 = 1; i_8 < 17; i_8 += 3) 
                {
                    {
                        arr_27 [i_8 + 1] [i_7] = ((/* implicit */int) arr_2 [i_0] [i_0 + 3] [(short)12]);
                        arr_28 [i_0] [i_0 - 2] [i_6] [i_7] [8ULL] [0LL] = ((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)0));
                        arr_29 [i_0] = ((/* implicit */long long int) ((_Bool) 0LL));
                    }
                } 
            } 
            arr_30 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)19)) >> (((/* implicit */int) (unsigned char)23))));
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (~(((1260172922) >> (((/* implicit */int) (unsigned char)29)))))))));
        }
        var_18 = ((/* implicit */_Bool) ((unsigned char) arr_15 [i_0] [i_0] [i_0] [i_0 - 1]));
    }
    for (long long int i_9 = 2; i_9 < 17; i_9 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) ((int) (short)14564))))));
        arr_34 [i_9] = ((/* implicit */short) arr_24 [i_9] [i_9] [i_9] [i_9] [i_9]);
        var_20 = ((/* implicit */int) var_10);
    }
    for (long long int i_10 = 2; i_10 < 17; i_10 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) (short)-14850);
        arr_38 [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3144971308094542091ULL)) ? (((/* implicit */long long int) 1712928188)) : (-3995288307169184038LL))))));
    }
    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
    var_23 = ((/* implicit */unsigned long long int) (short)14564);
}
