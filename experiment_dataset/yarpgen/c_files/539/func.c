/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/539
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 3; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)41746)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0])) - (((/* implicit */int) (unsigned char)187))))) && (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)198)) <= ((-(((/* implicit */int) (unsigned char)156)))))))));
                                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (+(((((/* implicit */_Bool) ((short) (unsigned char)0))) ? (0) : (((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) var_12))))))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) <= (min(((+(((/* implicit */int) (unsigned short)62363)))), ((+(((/* implicit */int) (short)27823))))))));
                    arr_18 [i_0] = ((/* implicit */unsigned long long int) ((min((((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_0] [(unsigned short)12] [i_1] [i_0] [i_0])) && (((/* implicit */_Bool) 3359958761U))))), (((int) (unsigned char)71)))) * (max(((-(((/* implicit */int) var_9)))), (((/* implicit */int) ((unsigned char) var_0)))))));
                }
                arr_19 [i_0] [(unsigned char)3] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [(unsigned char)2] [(unsigned char)2] [i_0] [(unsigned short)4] [i_1])) && (((/* implicit */_Bool) 7806721740550520690LL))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) var_1);
    var_21 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((934061088005105956ULL), (((/* implicit */unsigned long long int) (unsigned char)41))))) ? (((/* implicit */int) ((unsigned char) (unsigned char)221))) : (((/* implicit */int) ((short) var_0)))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (unsigned short)28336)))) * (var_3)))));
}
