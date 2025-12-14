/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247585
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_2 = 3; i_2 < 19; i_2 += 4) 
                {
                    var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)63131))))) ? (((/* implicit */int) (unsigned short)824)) : (((/* implicit */int) arr_1 [i_0])));
                    var_13 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)32))));
                }
                for (signed char i_3 = 2; i_3 < 21; i_3 += 4) 
                {
                    arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4416342133287912865LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)38))) : (11226915141879989626ULL)));
                    var_14 = ((/* implicit */unsigned long long int) arr_8 [i_1]);
                }
                /* vectorizable */
                for (unsigned char i_4 = 1; i_4 < 18; i_4 += 1) /* same iter space */
                {
                    var_15 -= ((/* implicit */unsigned int) ((_Bool) arr_9 [i_1 - 1] [i_1 - 1] [i_4 + 3]));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((var_11) ? (-4416342133287912869LL) : (((/* implicit */long long int) (-(((/* implicit */int) var_1))))))))));
                            var_17 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)45100)) <= (((/* implicit */int) (unsigned char)211))));
                            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_4 - 1] [i_1 + 1] [i_1 + 2])) % (((/* implicit */int) arr_14 [i_4 - 1] [i_1 + 2] [i_1 + 1]))));
                            arr_20 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */int) (unsigned char)53);
                            arr_21 [i_0] [i_0] [i_1 - 2] [i_1 + 2] [i_1 - 2] [i_4] = (!(((/* implicit */_Bool) ((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)203))) : (14178080124546206620ULL)))));
                        }
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)13)))))));
                    }
                    var_20 = ((((/* implicit */_Bool) (short)-7214)) ? (((/* implicit */int) ((_Bool) var_3))) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_1] [i_1] [i_1])));
                    var_21 = ((/* implicit */unsigned char) (!((_Bool)1)));
                    arr_22 [i_0] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (_Bool)1))))));
                }
                /* vectorizable */
                for (unsigned char i_7 = 1; i_7 < 18; i_7 += 1) /* same iter space */
                {
                    arr_26 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_24 [i_1 + 2] [i_7] [i_7] [i_7 + 2]))));
                    arr_27 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) ((long long int) ((unsigned long long int) var_2)));
                    /* LoopNest 2 */
                    for (signed char i_8 = 3; i_8 < 20; i_8 += 4) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned char) arr_6 [i_8 - 1] [i_1] [i_1 - 2]);
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)49210))))) ? (((/* implicit */unsigned long long int) 1721469790U)) : (var_6)));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) 
    {
        arr_36 [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((unsigned char) var_5)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1541907845))))))))));
        /* LoopNest 2 */
        for (unsigned short i_11 = 2; i_11 < 11; i_11 += 4) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    var_24 = ((/* implicit */_Bool) var_10);
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? ((+(arr_7 [i_11 - 1] [i_11 - 2] [i_11] [i_11]))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_31 [i_10] [i_11 + 1] [i_11 - 1] [i_11] [i_10]))))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */int) min((((/* implicit */short) ((unsigned char) 4268663949163344996ULL))), (arr_3 [i_10])))), ((-(((/* implicit */int) min((arr_13 [i_10] [i_10] [i_10] [i_10]), (arr_4 [i_10] [i_10] [i_10]))))))));
    }
}
