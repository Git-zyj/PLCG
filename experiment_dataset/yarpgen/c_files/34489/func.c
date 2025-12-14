/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34489
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
    var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (-(max((min((13183329315252887739ULL), (((/* implicit */unsigned long long int) (unsigned char)255)))), (((/* implicit */unsigned long long int) max((var_2), (var_7)))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 21; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
                    {
                        arr_11 [i_0] [i_1 - 2] [i_2] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) (~(((((/* implicit */int) arr_7 [i_0] [i_0 + 1])) >> (((((/* implicit */int) arr_1 [i_0])) - (11554)))))))) : (((/* implicit */unsigned short) (~(((((/* implicit */int) arr_7 [i_0] [i_0 + 1])) >> (((((((/* implicit */int) arr_1 [i_0])) - (11554))) - (1353))))))));
                        arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)13658))))) / (((arr_5 [i_0 + 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [12U])))))));
                        arr_13 [(unsigned char)8] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) (signed char)123))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            var_12 = ((/* implicit */unsigned char) (unsigned short)6219);
                            arr_17 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 1] [i_0] [4]))) <= (var_8)));
                            arr_18 [i_0] [(_Bool)1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_1 + 3] [i_0] [i_0] [i_0 - 1])) % ((-(((/* implicit */int) (unsigned char)19))))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */int) var_3);
                            var_13 = ((/* implicit */unsigned short) arr_2 [i_0 - 1]);
                        }
                    }
                    for (int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                    {
                        arr_23 [i_0] [21ULL] [21ULL] [i_0] [21ULL] [i_0] = ((/* implicit */unsigned short) ((long long int) ((_Bool) arr_7 [i_0] [i_0])));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0])) || (((((/* implicit */int) (unsigned char)0)) <= (((/* implicit */int) (_Bool)1))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 1) 
                        {
                            {
                                arr_28 [i_0] [i_6] [i_2 - 1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8856775697878908378ULL)) ? (var_4) : (((14693139024172622345ULL) % (((/* implicit */unsigned long long int) 209913232438492910LL))))));
                                var_15 = ((/* implicit */short) ((arr_10 [i_1] [i_1 - 1] [i_7]) || (((/* implicit */_Bool) (unsigned char)255))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_16 = ((/* implicit */signed char) var_1);
        arr_29 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_0 + 1] [i_0] [i_0 + 1])) != (((/* implicit */int) arr_16 [i_0 + 1] [8U] [i_0 + 1]))));
    }
    for (short i_8 = 1; i_8 < 21; i_8 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) ((((long long int) arr_0 [i_8])) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_0 [i_8]))))));
        /* LoopNest 3 */
        for (short i_9 = 1; i_9 < 19; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 3; i_10 < 20; i_10 += 4) 
            {
                for (int i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    {
                        var_18 = ((/* implicit */int) var_0);
                        var_19 = var_6;
                        var_20 = ((/* implicit */unsigned char) (-((~(((((/* implicit */_Bool) arr_6 [i_8] [5LL])) ? (13183329315252887739ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_8] [i_8] [i_8 - 1])))))))));
                    }
                } 
            } 
        } 
    }
    for (short i_12 = 1; i_12 < 21; i_12 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [(unsigned char)14])) ? (arr_27 [i_12 - 1] [i_12] [i_12 + 1] [i_12 - 1] [(unsigned char)6]) : (((/* implicit */long long int) arr_37 [(short)20]))))) & (arr_5 [i_12 + 1]))))));
        arr_44 [i_12] = max((max((arr_34 [i_12] [4] [20LL]), (((/* implicit */long long int) (unsigned char)236)))), (((/* implicit */long long int) arr_41 [16ULL] [(unsigned char)16] [(_Bool)1] [16ULL])));
    }
    var_22 = ((/* implicit */unsigned long long int) ((unsigned char) var_10));
}
