/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213111
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
    var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) (+(var_13)))))));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) -1704906613);
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */int) var_15);
                        arr_10 [i_1] [i_1] [i_0] [i_3] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_1 - 2] [i_0 - 1]))))) ? (((/* implicit */int) (((+(arr_8 [i_0 - 2] [i_1 + 2] [i_1] [i_2] [i_2] [i_3]))) >= (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) << (((1704906608) - (1704906606))))))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_9 [(unsigned short)5] [i_0] [i_1 + 1] [i_2] [7ULL] [i_1 + 1])), (var_2)))) || (((/* implicit */_Bool) ((unsigned long long int) (unsigned short)1444))))))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            arr_13 [i_0 - 2] [i_4] [i_3] [i_1] [i_1] = ((((/* implicit */int) ((_Bool) (unsigned short)1439))) + (((/* implicit */int) var_1)));
                            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */int) arr_5 [i_0 - 2] [i_1 - 2])) >= (((/* implicit */int) (unsigned short)1444))))))));
                            var_20 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(1455349658)))) || (((/* implicit */_Bool) (~(arr_8 [i_4] [i_1 + 1] [i_1 - 1] [i_0 - 1] [i_0] [i_0]))))));
                        }
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) -1704906606)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((unsigned int) max((var_5), (((/* implicit */int) arr_6 [i_0 - 1] [i_0] [i_0 - 1] [i_0]))))))))));
        arr_14 [17] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((short) arr_4 [i_0 - 2]))), (max((((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [i_0 - 1])), (var_4)))));
        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) 18446744073709551599ULL)) ? (1704906622) : (((/* implicit */int) (short)32759)))) < (((/* implicit */int) var_6)))))));
    }
    for (short i_5 = 2; i_5 < 23; i_5 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 24; i_6 += 4) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (417071692) : (((/* implicit */int) arr_15 [10U]))))), (((unsigned int) (_Bool)1))))))));
                    var_24 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_20 [i_5 - 2] [i_7 + 1] [i_7])) : (((/* implicit */int) arr_20 [i_5 - 2] [i_7 + 1] [i_5 - 2]))))));
                    var_25 -= ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25790)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_20 [i_5 + 1] [i_5] [i_5]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (2649830537U))));
                    arr_23 [i_5] [i_6] [i_5] [i_5] = ((/* implicit */long long int) ((unsigned int) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63549))))) << (((((/* implicit */int) (short)-25772)) + (25774))))));
                    arr_24 [i_6] |= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)1438))));
                }
            } 
        } 
        arr_25 [8ULL] [i_5] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) min(((unsigned short)370), (((/* implicit */unsigned short) var_10)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)381))))), (((short) (unsigned char)88)))))) : (18446744073709551612ULL)));
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)50))))) : (((((/* implicit */_Bool) var_12)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_5] [i_5])))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(1790731934U)))), (max((var_4), (((/* implicit */unsigned long long int) 1455349658)))))))));
    }
    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_10)), ((~(((/* implicit */int) (unsigned short)1439))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)1453))))) ? (((/* implicit */int) var_7)) : ((-(((/* implicit */int) var_1))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 10013301350695093683ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_15)))) ? (min((3540796834U), (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
}
