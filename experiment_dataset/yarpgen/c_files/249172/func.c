/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249172
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
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)48272)) == (((/* implicit */int) arr_5 [i_0] [i_0])))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_13 ^= max((((arr_4 [i_2] [i_3] [i_4]) / (min((((/* implicit */long long int) (short)25960)), (2724610053426633557LL))))), (((/* implicit */long long int) arr_12 [i_3] [i_0 + 1])));
                                var_14 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)255))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_3] [i_0] [i_3]))) % (11560616890992868109ULL))))) * (((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_5 [i_0] [i_0])) >> (((arr_1 [i_0 - 1]) + (2575917261240196784LL))))), (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)0)), ((unsigned char)241)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 3; i_6 < 12; i_6 += 2) /* same iter space */
                    {
                        arr_20 [i_6] [i_0] [i_0] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) arr_5 [i_0] [i_1]))))));
                        var_15 = ((/* implicit */unsigned char) ((signed char) arr_16 [i_0] [i_0 - 1] [i_0]));
                        arr_21 [i_0] [i_5] [i_0] [(signed char)0] = ((/* implicit */unsigned short) ((6886127182716683507ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_6 + 2])))));
                    }
                    for (unsigned int i_7 = 3; i_7 < 12; i_7 += 2) /* same iter space */
                    {
                        arr_26 [i_0] [i_1] [i_5] [i_5] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_1] [i_5] [i_5] [i_7 + 2]))) - (16081926771176019468ULL)));
                        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) (+(arr_23 [i_0 + 1]))))));
                        var_17 = ((/* implicit */unsigned int) (-(9223372036854775785LL)));
                    }
                    arr_27 [i_0] [i_1] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)0)) * (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_0 + 1]))))) : ((+(11560616890992868102ULL)))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_18 -= ((/* implicit */_Bool) arr_4 [i_0 - 1] [i_1] [i_8]);
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 10; i_9 += 2) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) (((+(min((((/* implicit */unsigned long long int) (unsigned char)41)), (18446744073709551615ULL))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(780690604))) < ((-(((/* implicit */int) (unsigned char)214))))))))));
                                var_20 -= ((/* implicit */int) ((((min((6886127182716683518ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) > (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)216)), (3931360599568986151LL)))))) ? (min((0ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_9])) % (((/* implicit */int) arr_31 [i_0] [i_1] [i_8] [4] [(_Bool)1] [i_9]))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_34 [i_10] [i_9] [i_8]))) % (arr_17 [i_0] [i_0] [i_0 + 1] [i_0]))) * (((/* implicit */long long int) (~(((/* implicit */int) arr_30 [i_0] [i_0] [2]))))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_21 &= ((/* implicit */unsigned long long int) max((var_6), (((/* implicit */long long int) var_7))));
}
