/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37596
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
    var_16 = ((/* implicit */unsigned char) ((var_1) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_15)))))));
    var_17 = ((/* implicit */unsigned long long int) var_8);
    var_18 = ((/* implicit */short) ((signed char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)21508)) || (((/* implicit */_Bool) (unsigned char)255))))) * (min((((/* implicit */int) var_5)), (1073741823))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) 1073741814)), (-3053615084782621225LL))), (((/* implicit */long long int) ((_Bool) var_15)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_1 [i_0])))))) : (max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8444))) : (var_9))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) -1821246976)), (var_12))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) min(((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) != (8ULL)))))), (((/* implicit */int) min((arr_3 [i_1]), (((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_6))))) - (((/* implicit */int) ((var_12) <= (((/* implicit */long long int) arr_9 [i_0] [i_3])))))))) ? (((/* implicit */int) (unsigned short)44569)) : (((((/* implicit */_Bool) min((((/* implicit */long long int) var_3)), (-3053615084782621218LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)10))))) : (((/* implicit */int) var_0))))));
                                arr_15 [i_0] [i_3] [(short)15] [i_1] [i_0] = ((/* implicit */unsigned short) ((4832024851321046396ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)208)))));
                                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) -5048806742989629711LL))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1] [(signed char)1] [i_1] [i_1] [i_2 - 1]))) ^ (var_6)))) ? (((/* implicit */unsigned long long int) ((((var_12) / (var_12))) / (((/* implicit */long long int) ((unsigned int) var_7)))))) : ((~(((((/* implicit */_Bool) (unsigned char)237)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(short)10] [i_1] [i_1] [i_2 - 1])))))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_5 = 2; i_5 < 20; i_5 += 2) 
    {
        for (long long int i_6 = 2; i_6 < 21; i_6 += 2) 
        {
            for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_19 [i_7] [i_5 - 2] [i_5 - 2])))) ? (((((/* implicit */_Bool) (+(arr_19 [i_5 + 3] [i_6 + 2] [i_7])))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) (unsigned char)13))))) : (((/* implicit */int) var_0)))) : ((~(((/* implicit */int) arr_22 [i_6]))))));
                    arr_25 [(unsigned short)7] [0] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) & (1073741813)))) > ((~(var_1))))) || (((/* implicit */_Bool) arr_23 [i_5] [i_6 + 1] [i_7]))));
                    var_23 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) var_2))), (((((/* implicit */int) arr_16 [i_5] [i_6 - 2])) ^ (((/* implicit */int) arr_24 [i_5]))))))) * (((((/* implicit */_Bool) arr_18 [i_6 + 1] [i_5 + 3])) ? (arr_18 [i_6 + 1] [i_5 + 3]) : (arr_18 [i_6 + 2] [i_5 + 3])))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7091854321118057960LL)) ? ((-(2097088U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_7] [i_6 + 2])))))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_14), (((/* implicit */unsigned short) arr_22 [i_5]))))))));
                }
            } 
        } 
    } 
}
