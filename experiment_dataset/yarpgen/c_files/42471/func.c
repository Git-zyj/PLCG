/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42471
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
    for (short i_0 = 2; i_0 < 22; i_0 += 1) /* same iter space */
    {
        arr_2 [(unsigned char)23] = ((/* implicit */short) max((((/* implicit */int) var_14)), ((+(((/* implicit */int) ((_Bool) var_13)))))));
        arr_3 [i_0] [(unsigned char)14] = ((/* implicit */unsigned char) ((unsigned short) (-(((unsigned long long int) 4029612305U)))));
    }
    for (short i_1 = 2; i_1 < 22; i_1 += 1) /* same iter space */
    {
        var_16 += ((/* implicit */signed char) ((long long int) (-(((/* implicit */int) var_6)))));
        var_17 = ((/* implicit */signed char) max(((+(var_13))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0)))))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 24; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                {
                    arr_10 [i_3] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) var_9);
                    arr_11 [i_1] [i_3] [i_1] [i_1] = ((/* implicit */int) var_14);
                }
            } 
        } 
        arr_12 [i_1] [i_1] = ((/* implicit */unsigned char) ((long long int) (+((-(var_1))))));
    }
    for (signed char i_4 = 2; i_4 < 16; i_4 += 1) 
    {
        arr_17 [(short)3] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) var_7)))))), ((~(max((0U), (((/* implicit */unsigned int) var_2))))))));
        var_18 = ((/* implicit */signed char) (!(((((((/* implicit */int) var_9)) & (((/* implicit */int) (_Bool)1)))) > ((+(((/* implicit */int) var_5))))))));
    }
    var_19 = ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
    {
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (short i_7 = 0; i_7 < 16; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (short i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        var_20 *= ((/* implicit */unsigned long long int) min((((((/* implicit */int) (unsigned char)255)) | (((((/* implicit */int) var_9)) % (((/* implicit */int) var_4)))))), (((/* implicit */int) (unsigned char)255))));
                        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) > (0ULL)))))), ((+(((/* implicit */int) ((unsigned char) var_10))))))))));
                        var_22 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) (unsigned char)0))))));
                        arr_30 [i_5] [(short)4] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)22))));
                        arr_31 [i_5] [i_5] = ((/* implicit */short) (_Bool)1);
                    }
                    arr_32 [i_5] [i_6] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) + ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (0U)))))));
                }
                for (signed char i_9 = 1; i_9 < 13; i_9 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        arr_41 [i_5] [(unsigned char)3] [4ULL] [(unsigned char)3] = ((/* implicit */unsigned int) (_Bool)0);
                        arr_42 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((1156624914) % (var_12))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) > (var_13)));
                        var_23 = ((/* implicit */unsigned char) max((((/* implicit */short) ((((/* implicit */int) ((signed char) (unsigned char)49))) > (((/* implicit */int) ((((/* implicit */int) (unsigned char)115)) == (1156624914))))))), (var_6)));
                        /* LoopSeq 2 */
                        for (int i_11 = 3; i_11 < 15; i_11 += 1) 
                        {
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_6)))) || (((_Bool) max((((/* implicit */short) (signed char)127)), (var_14)))))))));
                            var_25 -= ((/* implicit */int) ((signed char) min((((var_12) >= (((/* implicit */int) var_6)))), ((!(((/* implicit */_Bool) var_2)))))));
                        }
                        for (unsigned char i_12 = 0; i_12 < 16; i_12 += 2) 
                        {
                            var_26 = ((/* implicit */unsigned char) max((((((/* implicit */int) max(((short)-13376), (var_14)))) % (((((((/* implicit */int) var_5)) + (2147483647))) << (((((var_8) + (914296116098446702LL))) - (25LL))))))), (((/* implicit */int) ((unsigned char) var_3)))));
                            var_27 = ((/* implicit */signed char) ((2147483616U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))));
                        }
                    }
                    arr_49 [(_Bool)1] [(unsigned char)1] [i_5] = ((/* implicit */unsigned char) ((2097151U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
                    arr_50 [i_5] [10LL] [i_9] [i_5] = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((_Bool) var_2))), (max(((signed char)-2), (((signed char) 0ULL))))));
                    arr_51 [i_6] [i_5] [i_9 + 3] = (~(min((-1LL), (((/* implicit */long long int) var_0)))));
                }
                var_28 *= ((/* implicit */signed char) var_7);
                var_29 = ((/* implicit */unsigned char) ((signed char) 111750904));
            }
        } 
    } 
    var_30 = var_10;
}
