/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241076
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_18 *= ((/* implicit */unsigned char) var_14);
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) var_3))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_16))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */signed char) var_10);
    }
    for (int i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */int) var_12);
        arr_8 [i_1] = ((/* implicit */unsigned long long int) var_10);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_21 |= ((/* implicit */unsigned int) var_7);
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                for (unsigned char i_4 = 3; i_4 < 11; i_4 += 3) 
                {
                    for (int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4 + 2])) ? (((/* implicit */int) (short)23267)) : (((/* implicit */int) var_10)))))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_3] [i_1] [i_4 + 3])) ? (2863423164U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -117806693))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_6 = 1; i_6 < 13; i_6 += 4) 
            {
                for (unsigned int i_7 = 3; i_7 < 12; i_7 += 4) 
                {
                    for (int i_8 = 2; i_8 < 12; i_8 += 4) 
                    {
                        {
                            arr_29 [i_1] [i_6] [i_1] [i_1] [i_8] = ((/* implicit */signed char) (_Bool)1);
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_6 - 1] [i_8 + 1] [i_7 - 3] [i_7 - 3])) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) arr_17 [i_6 + 1] [i_8 + 1] [i_7 - 2] [i_7]))));
                            var_25 = ((/* implicit */long long int) ((arr_21 [i_1] [i_6 + 1] [i_8 - 2]) >> (((1558893725U) - (1558893724U)))));
                            arr_30 [i_1] [i_6] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)164)) : (((/* implicit */int) var_10))))));
                            arr_31 [i_6] [(_Bool)1] = ((/* implicit */unsigned int) (_Bool)1);
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2] [i_1])) ? (((/* implicit */int) arr_3 [i_1] [i_2])) : (((/* implicit */int) arr_3 [i_2] [i_1])))))));
            var_27 = ((/* implicit */_Bool) (-(-9074375856833591531LL)));
        }
    }
    var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) (unsigned short)59882)) ? (((var_17) ? (((/* implicit */unsigned long long int) var_8)) : (var_11))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) min((795280952), (((/* implicit */int) (signed char)-4))))))))));
    var_29 = var_11;
    var_30 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned int) (+(-907968026)))) : (((((/* implicit */_Bool) var_11)) ? (((3941073680U) & (((/* implicit */unsigned int) 2147483643)))) : (((/* implicit */unsigned int) (+(-476233265))))))));
}
