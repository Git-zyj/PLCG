/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222492
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
    var_15 = (+(var_13));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(var_1)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_1])))))))) : ((-((~(var_13)))))));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_2 + 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_2 - 2])))))) : ((+(var_13)))));
                    var_17 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(1361106869418079772LL))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_11 [i_0] [i_0] [(unsigned char)22] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-26))) : (arr_3 [i_3])))));
                        var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-16))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_12 [i_3] [(unsigned char)10] [i_2 + 1] [(unsigned char)10] [i_0])) : (((/* implicit */int) arr_2 [i_1] [i_3]))));
                    }
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? ((~(((/* implicit */int) (signed char)-47)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                        var_22 &= (~((+(((((/* implicit */_Bool) var_5)) ? (-8653775893063187043LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)4))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) -8653775893063187043LL)) ? (var_10) : (arr_1 [i_0])))) ? ((-(var_0))) : ((-(arr_5 [i_0] [i_2] [i_4]))))) : ((-(-830668071589555798LL)))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
                        {
                            arr_18 [i_0] [(unsigned char)6] [i_2] [(unsigned char)6] [(unsigned char)6] &= ((/* implicit */signed char) (-((~(((/* implicit */int) (signed char)-1))))));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))) : (arr_10 [i_2 - 1]))))));
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_2))))))))));
                        }
                    }
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        var_24 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_2 + 2] [i_2 - 1] [i_2 + 2] [i_2 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_6] [i_2 - 2] [i_0] [i_0] [i_0]))) : (7381570140320013994LL))))))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (arr_22 [(unsigned char)19] [i_2 - 2] [i_2 + 3] [i_2]) : ((+(var_1))))) : (((/* implicit */long long int) (~((+(((/* implicit */int) (unsigned char)0)))))))));
                        var_26 = ((/* implicit */signed char) (+((-(((/* implicit */int) (signed char)31))))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        arr_26 [i_0] [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-38))));
                        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [(unsigned char)2] [i_0] [i_2 + 2] [i_2 - 1] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)14)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)192)))))));
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(2289484220558085851LL)))) ? ((~(var_4))) : (((/* implicit */long long int) (-(((/* implicit */int) var_5))))))))));
                    }
                    arr_27 [i_0] [i_0] [i_2 + 2] [i_2 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)30))));
                }
            } 
        } 
    } 
}
