/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217724
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [14U] [i_0] = ((/* implicit */signed char) (unsigned short)21059);
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 2] [i_1 + 1])) ? (arr_6 [i_1 - 2] [i_1 - 1] [i_1 + 1]) : (arr_6 [i_1 + 2] [i_1 + 2] [i_1 + 2]))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (int i_3 = 1; i_3 < 7; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            arr_18 [i_3] [i_3 + 2] = ((/* implicit */unsigned short) arr_8 [i_3] [i_4]);
            var_10 = ((/* implicit */int) (signed char)127);
            arr_19 [i_3] [i_3] = ((/* implicit */signed char) arr_17 [i_4]);
        }
        /* vectorizable */
        for (signed char i_5 = 2; i_5 < 8; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                var_11 |= ((/* implicit */_Bool) ((unsigned short) (_Bool)0));
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) arr_20 [(signed char)0]))));
                /* LoopSeq 1 */
                for (signed char i_7 = 1; i_7 < 10; i_7 += 2) 
                {
                    arr_26 [i_3] [i_3] [i_7] [i_7] [i_3 + 3] [i_7] = ((/* implicit */signed char) (~(-1800957922328341619LL)));
                    var_13 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                }
                var_14 = ((/* implicit */long long int) -1165718200);
            }
            arr_27 [i_3] [i_3] = ((/* implicit */long long int) arr_6 [i_3 + 4] [i_3 + 3] [i_5 + 3]);
        }
        arr_28 [i_3] [4LL] = ((/* implicit */int) ((unsigned char) (-(min((((/* implicit */long long int) arr_3 [i_3] [i_3 + 3])), (arr_5 [12LL] [12LL]))))));
        var_15 = min((((/* implicit */long long int) var_7)), (((((/* implicit */long long int) ((/* implicit */int) arr_25 [(unsigned char)10] [(_Bool)1] [(_Bool)1] [i_3 + 1]))) & (((((/* implicit */_Bool) arr_4 [(short)4] [i_3])) ? (-5159030079493768984LL) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_3] [i_3]))))))));
    }
    /* vectorizable */
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
    {
        arr_31 [i_8] = ((/* implicit */signed char) ((var_6) / (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_8] [i_8 + 1])))));
        /* LoopSeq 1 */
        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) 
        {
            var_16 = ((/* implicit */_Bool) var_1);
            arr_34 [i_8] = ((/* implicit */_Bool) 7679495127120513115LL);
            var_17 = ((/* implicit */signed char) arr_5 [i_9] [(_Bool)1]);
        }
        /* LoopSeq 2 */
        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
        {
            var_18 = ((((/* implicit */_Bool) (unsigned char)166)) ? (((((/* implicit */int) arr_3 [i_8 + 1] [i_10])) + (((/* implicit */int) arr_11 [i_8])))) : (((/* implicit */int) arr_21 [i_10] [i_8 + 1])));
            arr_37 [i_8 + 1] [i_8 + 1] [i_10] = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) - (7679495127120513115LL));
            arr_38 [(unsigned char)2] [(unsigned char)2] [(unsigned char)2] = ((/* implicit */unsigned char) arr_6 [i_10] [i_10] [i_8 + 1]);
        }
        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (signed char i_12 = 2; i_12 < 9; i_12 += 1) 
            {
                arr_43 [i_12] [i_12] = ((((/* implicit */int) var_4)) >> (((7679495127120513115LL) - (7679495127120513096LL))));
                arr_44 [9] [9] [i_12] [9] = ((/* implicit */long long int) (signed char)68);
                var_19 += ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_12 - 1] [i_8 + 1])) / (((/* implicit */int) arr_2 [i_12 - 2] [i_8 + 1]))));
                arr_45 [i_12] [i_12] = ((/* implicit */_Bool) ((unsigned char) arr_32 [i_11]));
                /* LoopNest 2 */
                for (unsigned int i_13 = 1; i_13 < 8; i_13 += 1) 
                {
                    for (unsigned char i_14 = 2; i_14 < 8; i_14 += 3) 
                    {
                        {
                            var_20 ^= ((/* implicit */_Bool) ((signed char) arr_5 [i_11] [i_14 - 1]));
                            arr_52 [i_12] [i_12] [(unsigned char)5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_48 [i_12] [i_13 + 1] [i_12 - 2] [i_12])) ? (((/* implicit */int) ((883728521) < (((/* implicit */int) (_Bool)1))))) : (arr_23 [i_8] [i_8 + 1] [(_Bool)1] [i_8 + 1])));
                            var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */int) arr_36 [i_12 - 1] [i_12 - 1] [i_12 - 1])) != ((-(((/* implicit */int) (_Bool)0)))))))));
                        }
                    } 
                } 
            }
            for (unsigned char i_15 = 0; i_15 < 10; i_15 += 1) 
            {
                arr_56 [i_15] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_11])) == ((~(((/* implicit */int) (_Bool)1))))));
                arr_57 [i_8] [i_8] [i_11] [i_15] = ((/* implicit */_Bool) (+(var_1)));
                var_22 |= ((/* implicit */long long int) ((signed char) arr_0 [i_8 + 1] [i_8 + 1]));
                var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) arr_14 [i_8] [i_11] [i_15]))));
                var_24 *= ((/* implicit */_Bool) (+(((/* implicit */int) (short)-17984))));
            }
            arr_58 [(_Bool)1] [(_Bool)1] [i_11] = ((/* implicit */signed char) var_4);
            var_25 = ((/* implicit */long long int) arr_32 [i_11]);
        }
    }
    var_26 &= ((/* implicit */unsigned int) (signed char)81);
}
