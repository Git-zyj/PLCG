/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241272
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
    var_18 = var_0;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((max((((/* implicit */long long int) (_Bool)1)), (var_17))) ^ (((/* implicit */long long int) ((int) 17776196728048597678ULL))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_20 = ((/* implicit */long long int) 3353788372U);
            /* LoopSeq 1 */
            for (int i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned int) ((short) var_9));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))));
                            var_23 = ((/* implicit */short) max((((((/* implicit */int) (signed char)18)) < (((/* implicit */int) (_Bool)1)))), (((_Bool) arr_7 [2] [2] [i_2] [i_2 - 2]))));
                            var_24 = ((/* implicit */long long int) (_Bool)1);
                        }
                    } 
                } 
                arr_14 [i_0] [7ULL] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [(_Bool)0] [i_2 + 1] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_12 [i_0] [i_1] [i_2 + 1] [i_0] [i_2 - 2] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (min((((/* implicit */long long int) (_Bool)1)), (-520841575958659632LL)))));
                var_25 = ((/* implicit */unsigned int) var_6);
                var_26 = ((/* implicit */_Bool) ((signed char) ((signed char) (unsigned char)201)));
            }
            var_27 = ((/* implicit */int) var_2);
            arr_15 [12U] [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (var_13) : (((/* implicit */int) arr_9 [i_0] [11U] [i_1] [i_0])))), (((/* implicit */int) var_4))));
            /* LoopNest 3 */
            for (long long int i_5 = 2; i_5 < 22; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    for (int i_7 = 3; i_7 < 20; i_7 += 3) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) (_Bool)1);
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_7 + 3] [i_0] [(short)0] [i_6])) ? (-1991027653) : (((/* implicit */int) (signed char)-61))))) ? ((+(2394078899U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_5 [i_7 + 1] [i_0] [i_0] [i_6]))))));
                        }
                    } 
                } 
            } 
        }
        var_30 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) 12308343837730677892ULL)))));
        var_31 = ((/* implicit */unsigned short) var_3);
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        var_32 -= ((/* implicit */unsigned int) var_4);
        arr_24 [i_8] [i_8 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_8 + 1] [i_8 + 1] [i_8 + 1]))));
        /* LoopSeq 1 */
        for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            arr_28 [i_8] [i_8] = ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((/* implicit */int) ((_Bool) var_7))) : (arr_16 [i_8 + 1] [i_8 + 1] [i_8 + 1]));
            arr_29 [i_8] = ((/* implicit */long long int) ((unsigned short) arr_13 [i_8] [i_8 + 1] [i_8 + 1]));
            arr_30 [i_8] [i_9] = ((/* implicit */int) var_6);
        }
    }
    var_33 = ((/* implicit */_Bool) (+(((int) (unsigned char)42))));
    var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) max((131071), ((~(((/* implicit */int) ((-131072) < (var_15)))))))))));
}
