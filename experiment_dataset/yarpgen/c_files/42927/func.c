/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42927
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_5))) ? (min((((/* implicit */unsigned long long int) 1065856700334444692LL)), (((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)86))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) (signed char)-80)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (4294967295U))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            var_11 = ((/* implicit */unsigned int) arr_1 [3]);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        {
                            var_12 += ((/* implicit */long long int) arr_1 [(_Bool)1]);
                            arr_15 [i_1] [(unsigned char)15] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_10 [i_1] [i_1 - 2]))));
                            var_13 = ((/* implicit */_Bool) var_0);
                            arr_16 [(unsigned char)19] [i_1] [i_1] [(unsigned char)19] [i_1 - 2] [i_1] = ((((/* implicit */_Bool) ((short) var_6))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1 + 1] [i_1 + 1]))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)36))) : (arr_14 [i_3]))));
                            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_3] [i_3]))))) ? (1795094060U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))))))));
                        }
                    } 
                } 
            } 
            arr_17 [i_1] [i_1 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_1 - 1]))) : (260046848U)));
        }
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) /* same iter space */
        {
            var_15 ^= ((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]);
            arr_21 [i_0] = ((/* implicit */unsigned long long int) (signed char)-38);
        }
        for (unsigned int i_6 = 0; i_6 < 20; i_6 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                arr_28 [10ULL] = ((/* implicit */int) ((unsigned int) ((long long int) arr_2 [i_6])));
                var_16 += ((/* implicit */long long int) ((unsigned char) arr_27 [i_0] [i_0] [i_0]));
                arr_29 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_5 [13LL]);
            }
            var_17 ^= ((/* implicit */unsigned long long int) max((((unsigned int) var_2)), (((/* implicit */unsigned int) ((_Bool) (+(((/* implicit */int) arr_5 [i_0]))))))));
            var_18 = ((/* implicit */unsigned long long int) (!(((_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (9754135952326666541ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0]))))))));
            var_19 = max((2380493476U), (((/* implicit */unsigned int) (!(((_Bool) arr_14 [(unsigned short)13]))))));
        }
        for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
        {
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
            arr_32 [i_0] [3ULL] = ((/* implicit */signed char) ((unsigned short) (unsigned char)31));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            for (unsigned long long int i_10 = 3; i_10 < 17; i_10 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_11 = 0; i_11 < 20; i_11 += 2) 
                    {
                        arr_40 [i_0] [i_0] = ((/* implicit */long long int) var_6);
                        var_21 = ((/* implicit */unsigned int) 8754183143786639131LL);
                    }
                    arr_41 [i_9] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((((/* implicit */int) var_3)), (arr_23 [i_0] [i_0] [i_10])))))) && ((!(((/* implicit */_Bool) arr_4 [i_0] [i_10 + 2] [i_10]))))));
                }
            } 
        } 
    }
}
