/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230878
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
    var_18 &= ((/* implicit */unsigned char) (!(var_17)));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) min(((((_Bool)0) ? (min((((/* implicit */unsigned int) (_Bool)1)), (4294967275U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (((/* implicit */unsigned char) arr_0 [(unsigned char)9])))))))), (var_8)));
        arr_2 [i_0] [8] = ((/* implicit */unsigned short) var_6);
        var_20 = ((/* implicit */_Bool) (((((~(((/* implicit */int) (short)9693)))) + (2147483647))) << ((((+(((/* implicit */int) max((var_11), (arr_1 [i_0] [i_0])))))) - (66)))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_4 = 4; i_4 < 13; i_4 += 4) 
                        {
                            var_21 &= ((/* implicit */_Bool) max((((unsigned char) min((4294967291U), (4294967295U)))), (((/* implicit */unsigned char) (_Bool)1))));
                            var_22 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((short) arr_5 [i_0] [i_4] [8LL] [i_3])))));
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) min((max(((~(((/* implicit */int) (signed char)127)))), (((/* implicit */int) ((unsigned char) var_17))))), ((~(((/* implicit */int) var_12)))))))));
                            var_24 = min((842085735831415469ULL), (((/* implicit */unsigned long long int) (~(504713264U)))));
                            var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_6 [i_4 - 4] [i_4 - 4])))) ? (max((((/* implicit */unsigned int) (signed char)63)), (5U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? ((~(((/* implicit */int) var_5)))) : (((((/* implicit */_Bool) 2706328785U)) ? (((/* implicit */int) ((734895164U) == (20U)))) : (((/* implicit */int) ((((/* implicit */long long int) 712918230U)) == (var_3))))))));
                        }
                        var_26 = min((((/* implicit */unsigned int) (!(min(((_Bool)1), ((_Bool)1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_1]), (var_6))))) : (max((((/* implicit */unsigned int) 463857423)), (9U))))));
                        var_27 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(var_10)))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-35)) + (((/* implicit */int) (unsigned char)99))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_10 [i_0] [i_3] [i_0] [i_0])), (var_8)))) : (((((/* implicit */_Bool) (unsigned char)145)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
                    }
                } 
            } 
        } 
    }
}
