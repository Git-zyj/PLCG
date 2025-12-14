/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215888
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
    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)31226)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_13)) : (-623242729915057104LL)))) ? ((-(((/* implicit */int) (signed char)-126)))) : ((-(((/* implicit */int) var_0)))))) : ((~(min((((/* implicit */int) (unsigned short)65535)), (225161064)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)65535)), (arr_1 [i_0])))) ? ((-(arr_1 [i_0]))) : ((~(arr_1 [i_0])))))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)72), ((unsigned char)190))))) ^ (arr_0 [i_0])));
        var_22 = arr_1 [i_0];
    }
    for (signed char i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
        {
            for (signed char i_3 = 2; i_3 < 13; i_3 += 1) 
            {
                {
                    var_23 = ((/* implicit */short) ((unsigned short) (unsigned char)225));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            {
                                var_24 += ((((/* implicit */_Bool) (unsigned short)12519)) ? (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)30)) <= (((/* implicit */int) (unsigned char)46))))) == (((/* implicit */int) (_Bool)0))))) : (-1813305881));
                                var_25 += ((/* implicit */short) max((((unsigned long long int) arr_6 [i_5] [i_4] [i_1])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) 4089788130U))) ? (arr_0 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))));
                                var_26 = ((((/* implicit */int) min((((unsigned char) var_1)), (((/* implicit */unsigned char) arr_6 [i_3] [i_3] [i_5]))))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)-92)) + (((/* implicit */int) (unsigned char)30)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 = ((/* implicit */short) (signed char)101);
        var_28 = ((/* implicit */signed char) (-(((((((/* implicit */int) var_8)) > (((/* implicit */int) arr_2 [i_1] [i_1])))) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)12519))))))));
        var_29 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65528))) : (arr_12 [(short)3] [i_1] [i_1] [i_1] [i_1])))))), ((~(min((arr_8 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]))))))));
        var_30 = ((/* implicit */unsigned char) var_4);
    }
}
