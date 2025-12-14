/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221839
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((arr_6 [i_0] [i_0]), (((/* implicit */unsigned long long int) (signed char)114)))) >> (((/* implicit */int) (unsigned char)57))))) ? (((unsigned long long int) max(((signed char)-119), (((/* implicit */signed char) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1173147811)) ? (((/* implicit */unsigned int) -1173147811)) : (arr_7 [i_0] [i_0] [i_0]))) & (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) * (((/* implicit */int) arr_8 [i_0] [i_1] [i_0]))))))))));
                        var_19 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2 + 3]))) > (var_2)))) >= (((/* implicit */int) ((short) (signed char)-119)))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_4] [i_1 + 2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_8 [i_2 + 2] [i_1 - 1] [i_1 + 2]))));
                        var_21 -= ((/* implicit */short) (((~(((/* implicit */int) var_17)))) / (((/* implicit */int) ((((/* implicit */_Bool) (signed char)118)) && (((/* implicit */_Bool) 11013759414872790112ULL)))))));
                        var_22 = ((/* implicit */int) min((var_22), ((~(((/* implicit */int) ((unsigned char) arr_5 [i_0])))))));
                        var_23 ^= ((/* implicit */unsigned int) var_17);
                    }
                    var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (_Bool)1))));
                    var_25 |= ((/* implicit */unsigned long long int) arr_4 [i_1] [i_0]);
                    var_26 = ((/* implicit */int) max((var_26), (((int) min((var_2), (((/* implicit */long long int) ((unsigned char) (signed char)106))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_5 = 2; i_5 < 10; i_5 += 4) 
    {
        arr_14 [i_5] = ((/* implicit */unsigned char) ((int) ((arr_4 [i_5] [i_5]) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))));
        var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) var_10))));
        var_28 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)243))) : (arr_6 [(unsigned short)12] [i_5]))) >> ((((-(14814456175108044206ULL))) - (3632287898601507369ULL)))));
    }
}
