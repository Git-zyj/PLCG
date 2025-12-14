/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222061
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
    var_16 = ((/* implicit */int) min(((~(((unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((((int) 1920ULL)) < (((/* implicit */int) min((((/* implicit */short) (unsigned char)85)), (var_13)))))))));
    var_17 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) min((((/* implicit */unsigned long long int) var_12)), (9517351802444139787ULL)))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_18 &= ((/* implicit */int) arr_2 [i_0]);
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0])) & (((/* implicit */int) ((3826370115U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)172))))) ? (min((((/* implicit */unsigned long long int) (unsigned char)13)), (((((/* implicit */_Bool) 1U)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-44))))))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_5))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_7 [10]))))))))));
                    var_21 = var_14;
                    var_22 = ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) var_0)), (arr_2 [i_0]))));
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_2])) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (unsigned char)86)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_4 [14])) : (((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) arr_6 [i_0])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))))) : (var_5)));
                }
            } 
        } 
    }
    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_6 [6U])) % (((/* implicit */int) var_0)))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)143)), (arr_7 [i_3]))))) == ((~(var_15))))))));
        var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned char)255)), (var_6)));
        var_26 += ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_3] [19U])) ? (((/* implicit */int) (unsigned char)85)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)43893), (((/* implicit */unsigned short) var_2)))))) : (max((((/* implicit */unsigned int) var_10)), (var_5))))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)43)) >> (((1378100669) - (1378100664))))))));
        var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), (var_2))))) * ((+(var_15)))));
    }
    for (unsigned long long int i_4 = 2; i_4 < 19; i_4 += 3) 
    {
        var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((unsigned char) (signed char)20)))));
        var_29 = ((/* implicit */unsigned long long int) max((((unsigned int) (~(((/* implicit */int) (signed char)-46))))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)0)))))));
        /* LoopSeq 1 */
        for (unsigned char i_5 = 2; i_5 < 18; i_5 += 3) 
        {
            var_30 = ((/* implicit */unsigned char) (unsigned short)29297);
            var_31 &= ((/* implicit */unsigned long long int) ((((arr_11 [i_4 + 1]) ? (((/* implicit */int) arr_11 [i_4 - 2])) : (((/* implicit */int) var_2)))) + (((((arr_1 [(unsigned short)12]) + (2147483647))) << (((((((/* implicit */int) var_13)) + (6403))) - (27)))))));
        }
    }
}
