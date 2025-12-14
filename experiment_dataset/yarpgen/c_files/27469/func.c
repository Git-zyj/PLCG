/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27469
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
    var_13 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((492751299728584419LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!((_Bool)1)))))))));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (8638255012702563992ULL)));
        /* LoopNest 3 */
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                {
                    {
                        var_16 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65531))) < (9808489061006987624ULL)))) == (((/* implicit */int) var_6)))))));
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_2] [i_1])))))));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            var_18 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) != (((((/* implicit */_Bool) ((unsigned short) (unsigned short)65531))) ? (2655272015155802363ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9808489061006987624ULL)))))))));
                            var_19 = ((/* implicit */_Bool) (unsigned short)65531);
                        }
                        var_20 = ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) var_10))) + (((arr_4 [5]) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))), (((/* implicit */long long int) ((_Bool) max((2147483647), (((/* implicit */int) (unsigned char)195))))))));
                        /* LoopSeq 2 */
                        for (int i_5 = 2; i_5 < 23; i_5 += 2) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned int) ((signed char) ((3439481086826494334ULL) <= (((/* implicit */unsigned long long int) 2018705627)))));
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) max((((long long int) (-(((/* implicit */int) var_6))))), ((-(min((((/* implicit */long long int) (unsigned char)1)), (3205565298062368646LL))))))))));
                        }
                        for (int i_6 = 2; i_6 < 23; i_6 += 2) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)115)) ? (18446744073709551607ULL) : (70368677068800ULL)));
                            var_24 = ((/* implicit */unsigned long long int) arr_13 [i_1] [i_1] [i_1]);
                            var_25 = ((/* implicit */_Bool) ((int) ((_Bool) (unsigned char)1)));
                            var_26 *= ((/* implicit */short) ((min(((+(((/* implicit */int) (unsigned char)1)))), (min((-1), (((/* implicit */int) arr_16 [i_6] [i_2] [i_2] [i_1] [i_1 - 1] [i_0])))))) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)32740), (((/* implicit */unsigned short) arr_8 [i_6] [i_3])))))) != (3582877770U))))));
                            var_27 = ((/* implicit */unsigned short) (-(min((((/* implicit */int) ((signed char) 9808489061006987624ULL))), ((~(((/* implicit */int) arr_6 [i_1]))))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 2) 
    {
        var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((min((1381812507862582378LL), (var_3))) - (((/* implicit */long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) (_Bool)1)))))))) >= ((-(max((((/* implicit */unsigned long long int) arr_6 [6LL])), (18446744073709551604ULL)))))));
        var_29 = ((/* implicit */unsigned char) ((long long int) arr_10 [(unsigned short)6] [(unsigned short)6] [(unsigned short)6] [i_7]));
    }
}
