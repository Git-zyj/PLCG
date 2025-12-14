/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21616
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
    var_14 = ((/* implicit */unsigned char) ((int) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_11))))) : (max((var_9), (-573816970))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned char) ((_Bool) 573816986));
            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max(((-(min((var_13), (var_12))))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))))));
            arr_6 [i_1] [i_1] [i_0 - 1] = ((/* implicit */_Bool) 573816963);
        }
        for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            arr_9 [i_2] = ((/* implicit */unsigned long long int) 573816963);
            arr_10 [i_0] [i_0] = ((/* implicit */_Bool) (+(-1884524197)));
            arr_11 [i_0] = ((/* implicit */unsigned long long int) var_13);
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                arr_14 [i_0 + 1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)25934)), (-573816970)));
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    arr_17 [i_2] [i_3] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_2]);
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_3 [i_0 + 1]))))) ? (((arr_3 [i_0 + 1]) ? (var_13) : (((/* implicit */int) arr_15 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_3 [i_0 + 1]))));
                    arr_18 [i_0] [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)56))));
                }
            }
        }
        for (unsigned int i_5 = 1; i_5 < 10; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) max(((+(var_10))), (((/* implicit */unsigned int) ((13930349418963333306ULL) >= (((/* implicit */unsigned long long int) 3726475312U)))))));
                            arr_27 [i_0 - 1] [i_5] [i_0 - 1] = ((((/* implicit */int) (((+(var_7))) == (var_0)))) + (((/* implicit */int) max(((_Bool)0), (arr_3 [i_0 - 1])))));
                        }
                    } 
                } 
            } 
            var_19 = ((/* implicit */signed char) max((((min((((/* implicit */unsigned int) var_1)), (3556133410U))) + (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned int) arr_24 [i_0 - 1] [i_0] [i_0]))))) > (arr_19 [i_0] [i_5 + 2] [i_0 - 1]))))));
        }
        var_20 = ((((/* implicit */int) ((unsigned char) max((((/* implicit */long long int) var_4)), (var_3))))) >> ((((~(1884524197))) + (1884524226))));
    }
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((int) (_Bool)1)))));
}
