/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30578
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
    var_15 = max(((+(min((((/* implicit */unsigned int) (short)24345)), (var_8))))), (((/* implicit */unsigned int) ((unsigned short) max(((unsigned short)46405), (((/* implicit */unsigned short) (_Bool)1)))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) ((short) ((int) 2339270278U)));
        arr_2 [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 1239005054)))) == (max((((/* implicit */unsigned long long int) ((var_7) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), (((arr_0 [i_0] [i_0]) & (arr_0 [i_0] [i_0]))))));
        var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (8201067958056824769ULL)));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_18 *= ((/* implicit */unsigned char) (+(var_13)));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                {
                    arr_9 [i_1] [i_2] [i_1] [i_3] = ((/* implicit */unsigned char) (short)1410);
                    /* LoopSeq 2 */
                    for (short i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) arr_1 [i_4]))));
                        arr_12 [i_1] = ((/* implicit */unsigned int) ((((long long int) 1727568956U)) & (((/* implicit */long long int) ((/* implicit */int) (signed char)125)))));
                        var_20 = (!(((/* implicit */_Bool) ((int) var_2))));
                        var_21 *= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (-2147483647 - 1))))) ? (((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_2] [i_3 + 1] [i_4])) ? (((/* implicit */long long int) (-2147483647 - 1))) : (arr_8 [4LL] [i_2] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4194048))))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        var_22 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) 8605007038381832874LL)) * (arr_11 [i_1] [i_2] [(unsigned short)9] [0ULL] [(unsigned char)3]))) % (((/* implicit */unsigned long long int) (+(arr_4 [i_1] [1U]))))));
                        var_23 *= ((/* implicit */unsigned long long int) ((343960852U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    }
                    arr_15 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_8 [i_3] [i_3] [i_3]))) ? (((/* implicit */long long int) (-2147483647 - 1))) : (arr_8 [i_3] [i_2] [i_1])));
                }
            } 
        } 
        arr_16 [(unsigned char)4] |= 2567398339U;
    }
    /* vectorizable */
    for (long long int i_6 = 2; i_6 < 13; i_6 += 3) 
    {
        var_24 = ((/* implicit */int) (!(arr_17 [i_6 - 1])));
        /* LoopSeq 4 */
        for (unsigned char i_7 = 0; i_7 < 14; i_7 += 1) 
        {
            var_25 = ((/* implicit */int) ((arr_21 [i_6 - 2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40060)))));
            var_26 = ((/* implicit */signed char) (short)32745);
            arr_22 [(_Bool)1] [10] [i_7] = var_2;
        }
        for (unsigned short i_8 = 1; i_8 < 10; i_8 += 3) /* same iter space */
        {
            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) var_4))));
            var_28 = ((/* implicit */unsigned short) arr_19 [i_6 - 1] [i_6 - 2]);
            arr_26 [i_6] [i_8] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 8605007038381832874LL))));
        }
        for (unsigned short i_9 = 1; i_9 < 10; i_9 += 3) /* same iter space */
        {
            var_29 -= ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_29 [(signed char)12])))));
            arr_30 [(short)10] &= ((/* implicit */_Bool) arr_20 [(unsigned short)12] [i_9]);
            var_30 &= ((/* implicit */signed char) (+(((/* implicit */int) arr_29 [(_Bool)1]))));
            arr_31 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 3951006432U)) ? (2567398339U) : (3951006455U)));
        }
        for (unsigned short i_10 = 1; i_10 < 10; i_10 += 3) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned char) var_13);
            var_32 = ((/* implicit */short) (~(((/* implicit */int) (short)(-32767 - 1)))));
        }
    }
    var_33 &= ((/* implicit */unsigned long long int) (~(((((((/* implicit */int) var_0)) & (((/* implicit */int) (short)-10858)))) | (((753926156) & (((/* implicit */int) (short)-20315))))))));
}
