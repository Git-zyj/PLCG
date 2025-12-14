/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239235
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_14 += ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_6) : (((/* implicit */int) arr_1 [i_0])))))) << (((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (-83570726) : (-2147483639))) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_1 [i_0]))))) | (max((var_4), (((/* implicit */unsigned int) ((short) var_5)))))));
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_15 += ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_1 [i_1]), (arr_1 [i_1])))) ? (5132974191600290909LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_1 [i_1])))))));
        var_16 = (+(((((/* implicit */_Bool) arr_5 [4LL])) ? (((/* implicit */int) (!(var_0)))) : (max((-1405842393), (((/* implicit */int) var_5)))))));
        arr_6 [10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) var_2)) : (arr_0 [i_1])));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (2054277180) : (((/* implicit */int) (signed char)0))))) * (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1211367478)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (var_4)))) & ((+(17428658643346466871ULL)))))));
        /* LoopNest 2 */
        for (signed char i_3 = 2; i_3 < 17; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_10))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)0)))))));
                                var_19 = ((/* implicit */unsigned char) arr_7 [(_Bool)1]);
                                arr_20 [12] [i_3] [i_3 - 1] [i_5] [i_5] [(unsigned short)0] |= ((/* implicit */int) (-(4031903817427901969LL)));
                                var_20 &= (((!(((/* implicit */_Bool) (short)(-32767 - 1))))) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)255))))));
                                arr_21 [i_2] [i_2] [i_3] [i_4] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)(-127 - 1)))))) ? ((((-2147483647 - 1)) | (((/* implicit */int) var_11)))) : (((/* implicit */int) var_5))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        var_21 *= ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_8), ((unsigned char)240)))) && (((/* implicit */_Bool) 0LL))));
                        var_22 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), ((-(4503598553628672LL)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)127))))) ? (min((arr_8 [i_2]), (((/* implicit */int) var_7)))) : ((~(((/* implicit */int) var_8))))))) : (arr_22 [i_2] [i_2] [i_2] [i_2])));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) 
                        {
                            arr_26 [i_3 - 1] [i_4] [11] [i_2] = ((/* implicit */long long int) (short)(-32767 - 1));
                            var_23 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned short)52936)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)32))))));
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_18 [i_2] [i_7] [i_2] [i_2]))));
                        }
                        for (signed char i_9 = 0; i_9 < 20; i_9 += 2) /* same iter space */
                        {
                            var_25 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)17))) % (((var_0) ? (4294967285U) : (((((/* implicit */_Bool) var_10)) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))))));
                            var_26 = ((/* implicit */signed char) min((((((/* implicit */int) arr_16 [i_4] [(unsigned char)15] [i_4] [i_7])) ^ (((/* implicit */int) arr_16 [i_9] [i_9] [i_9] [8ULL])))), ((+(((/* implicit */int) (unsigned char)246))))));
                        }
                        for (signed char i_10 = 0; i_10 < 20; i_10 += 2) /* same iter space */
                        {
                            arr_34 [i_2] [i_7] [19ULL] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))));
                            arr_35 [i_2] [18] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) max((5081869041713817676LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_3)))))));
                            arr_36 [i_2] [i_2] = ((/* implicit */unsigned char) (short)32760);
                        }
                    }
                    var_27 += (signed char)(-127 - 1);
                }
            } 
        } 
    }
    for (long long int i_11 = 1; i_11 < 15; i_11 += 2) 
    {
        arr_39 [i_11] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (signed char)51)), ((+(arr_24 [i_11] [i_11 - 1] [i_11] [i_11 + 3] [i_11])))));
        var_28 = ((/* implicit */int) var_5);
    }
    var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (261333729)))) ? (((((var_4) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34313))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)238)), ((short)-16133)))))) : (((/* implicit */int) var_11)))))));
    /* LoopNest 2 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        for (unsigned char i_13 = 1; i_13 < 16; i_13 += 2) 
        {
            {
                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)30))));
                var_31 = ((/* implicit */short) (+((+(1112418076)))));
            }
        } 
    } 
    var_32 = ((/* implicit */int) ((long long int) var_12));
}
