/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29495
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
    var_11 = ((/* implicit */unsigned char) ((long long int) var_8));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (+((((((~(((/* implicit */int) var_4)))) + (2147483647))) << (((((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0])), (arr_0 [12ULL])))) - (48)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            arr_6 [0U] [0U] [0U] = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_4 [i_0] [i_1]))))));
            var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) (+(var_1))))) | (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) / (var_9))))))))))));
            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 13149181852660783297ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))))) ? (((/* implicit */int) ((var_6) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1]))))) << (((/* implicit */int) ((_Bool) (_Bool)1)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned char i_3 = 1; i_3 < 13; i_3 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 1; i_4 < 14; i_4 += 4) /* same iter space */
                        {
                            var_14 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_14 [(unsigned char)12] [i_1] [(unsigned char)12] [(unsigned char)12] [9U])) : ((-(((/* implicit */int) var_4))))))) + (arr_10 [i_0] [i_3 + 1] [5LL] [i_3] [5LL])));
                            var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (+(arr_11 [i_3 + 1] [i_4 + 1] [i_4 + 1] [i_4] [i_4] [0U])))), ((+(2097151ULL)))));
                        }
                        for (unsigned int i_5 = 1; i_5 < 14; i_5 += 4) /* same iter space */
                        {
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_14 [(signed char)13] [(signed char)13] [(signed char)13] [i_5 + 1] [i_3 + 2])))))));
                            var_17 += ((/* implicit */int) (_Bool)1);
                            var_18 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (signed char)-40)), (var_8)));
                        }
                        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 4) /* same iter space */
                        {
                            var_19 = (!((!(arr_8 [i_0] [i_6 + 1] [i_2] [i_3 - 1]))));
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)5))))) == (((/* implicit */int) ((907568849334323484ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(unsigned short)13] [i_1] [i_2] [(unsigned short)13]))))))))), ((-(((/* implicit */int) (!((_Bool)1)))))))))));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 1; i_7 < 14; i_7 += 2) 
                        {
                            var_21 |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (+(arr_5 [i_0] [i_1])))) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3 + 2] [i_7])) : (((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (arr_9 [i_0] [i_0] [i_0] [i_0]))))))));
                            var_22 = (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) 2147483626)) ? (var_7) : (907568849334323484ULL)))))));
                        }
                        for (signed char i_8 = 3; i_8 < 12; i_8 += 3) 
                        {
                            arr_25 [i_0] [i_8] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((9282657194864594286ULL) != (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_7) : (((/* implicit */unsigned long long int) -3156084864878911279LL)))))))));
                            var_23 -= ((/* implicit */_Bool) arr_10 [(signed char)1] [i_1] [i_1] [i_1] [i_1]);
                        }
                    }
                } 
            } 
        }
    }
    var_24 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) + (((var_4) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16649)))))))) ? ((~(((/* implicit */int) var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (var_5)))))))));
}
