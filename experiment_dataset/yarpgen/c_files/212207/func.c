/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212207
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
    var_10 = ((/* implicit */short) 7631379974773635149ULL);
    var_11 = ((((/* implicit */_Bool) 0U)) ? (9783652832686276278ULL) : (4095ULL));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 4; i_2 < 13; i_2 += 4) 
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) (unsigned short)38291);
                /* LoopNest 2 */
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 4) 
                    {
                        {
                            var_12 += ((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) (unsigned short)27245)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_1]))) : (3980390958260534906LL))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) 775445609)) == (((unsigned long long int) arr_3 [(unsigned char)12] [(unsigned char)12])))))));
                            var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) arr_0 [(unsigned char)5])) : ((+(((/* implicit */int) ((4915361560441891768LL) < (((/* implicit */long long int) arr_6 [i_1] [(short)5] [i_1])))))))));
                            arr_13 [(unsigned char)6] [i_1] [i_1] [i_1] [i_4] [i_4] = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) -3980390958260534906LL)) ? (((/* implicit */unsigned long long int) var_8)) : (1893189080285109054ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) 262143)) < (arr_1 [i_4]))))))) & (((min((4541093393459711265ULL), (((/* implicit */unsigned long long int) (short)-1)))) / (((/* implicit */unsigned long long int) var_0))))));
                            var_14 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_1] [i_3] [i_1] [i_2 - 1])) ? (arr_12 [i_0] [13U] [(short)13] [9LL] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [7ULL] [i_0] [2] [i_0] [i_2 - 4])))))), (((((/* implicit */_Bool) arr_12 [10ULL] [i_1] [7ULL] [i_3] [(unsigned short)0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_4] [i_3]))) : (-8267473307409060849LL)))));
                            arr_14 [i_4] [i_1] [i_2] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_4 [(signed char)7] [9]))))))) ? (((/* implicit */long long int) arr_6 [i_1] [i_1] [i_1])) : (((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_0] [i_1] [i_1]))) ^ (max((3980390958260534917LL), (((/* implicit */long long int) (short)-1913))))))));
                        }
                    } 
                } 
            }
            var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_2)))) ? (16404772036369450916ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_0] [(_Bool)1] [(unsigned char)10])))))))))));
            arr_15 [(unsigned char)0] [i_1] = -1053288500;
            arr_16 [i_0] [i_1] |= ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_4 [i_1] [i_0])) ^ (arr_6 [i_0] [(_Bool)1] [0ULL])))))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) -168475846092902490LL)) ? (((/* implicit */int) (_Bool)1)) : (var_6)))))));
        }
        var_16 *= min((7631379974773635149ULL), (((/* implicit */unsigned long long int) arr_3 [i_0] [3U])));
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 4; i_5 < 12; i_5 += 4) 
        {
            for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                for (long long int i_7 = 3; i_7 < 12; i_7 += 4) 
                {
                    {
                        var_17 = ((/* implicit */_Bool) arr_24 [i_6] [i_5 + 2] [i_6]);
                        arr_25 [i_0] [i_5] [i_6] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1193511521935657147ULL)) ? (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)63)))) : (((/* implicit */int) arr_0 [i_5 - 4]))))) ^ (((((/* implicit */_Bool) arr_5 [2] [i_5] [i_7 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_5 - 1] [i_6] [i_7 + 1] [i_7 - 3]))) : (min((((/* implicit */unsigned int) arr_6 [i_0] [12LL] [(unsigned char)6])), (arr_19 [(unsigned char)12] [i_6])))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) 
                        {
                            var_18 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((var_2), (var_8)))) - (min((((/* implicit */unsigned long long int) arr_12 [i_8] [i_7] [(_Bool)1] [i_5] [2])), (17293822569102704640ULL)))))) ? (((/* implicit */unsigned long long int) var_8)) : (min((((/* implicit */unsigned long long int) var_7)), ((-(2484262428048827879ULL)))))));
                            arr_28 [i_8] [i_5] [i_6] [i_6] [(_Bool)0] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_4) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) (_Bool)1)))) ^ (((/* implicit */int) max((var_9), (((/* implicit */unsigned char) var_1)))))))) ? (((/* implicit */unsigned long long int) var_8)) : ((+(arr_5 [i_0] [i_0] [i_0])))));
                            arr_29 [i_0] [i_5] [(unsigned short)4] [i_7] [i_8] = ((/* implicit */unsigned short) var_5);
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    arr_41 [i_9] [i_10] [i_11] = ((/* implicit */signed char) max((arr_6 [i_11] [i_11] [i_11]), (((/* implicit */int) arr_18 [7ULL] [7ULL] [(short)2]))));
                    var_19 = ((/* implicit */unsigned int) 7631379974773635149ULL);
                    arr_42 [i_9] [i_11] [i_9] = 16949707222362078132ULL;
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((((((/* implicit */int) arr_9 [i_9] [(unsigned char)9] [9ULL] [3LL] [2LL])) ^ (((/* implicit */int) arr_9 [i_9] [i_9] [i_9] [i_9] [i_9])))), ((~(((/* implicit */int) (unsigned char)2)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
    {
        arr_45 [i_12] [i_12] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_12]))))));
        var_21 ^= ((/* implicit */_Bool) ((unsigned int) 511ULL));
    }
    var_22 |= min(((+(max((0LL), (((/* implicit */long long int) var_4)))))), (((/* implicit */long long int) ((_Bool) ((var_8) == (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
}
