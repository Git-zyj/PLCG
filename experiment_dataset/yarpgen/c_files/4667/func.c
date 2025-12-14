/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4667
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
    var_15 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_0))));
    var_16 = ((/* implicit */long long int) var_1);
    var_17 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 16897218573434187493ULL))))) == (((/* implicit */int) ((var_8) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))))));
    var_18 = var_11;
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        var_19 |= ((/* implicit */unsigned int) var_5);
        var_20 ^= var_1;
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            var_21 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_3 [i_0])))) / (((/* implicit */int) ((unsigned short) (+(var_10)))))));
            var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                var_23 *= ((/* implicit */unsigned short) -3243332589595964836LL);
                var_24 = ((((((/* implicit */_Bool) (+(-6192985130091320951LL)))) && (((/* implicit */_Bool) var_14)))) ? (((((/* implicit */_Bool) (+(arr_7 [i_0] [i_0] [i_0] [i_0 - 1])))) ? (((/* implicit */int) arr_5 [7ULL] [i_1])) : (((/* implicit */int) (signed char)-17)))) : ((-(((/* implicit */int) (unsigned short)24796)))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                var_25 &= ((/* implicit */int) (~((+(6747047250602891822ULL)))));
                var_26 = ((/* implicit */int) (-((~(max((((/* implicit */long long int) arr_9 [i_0] [i_0] [0U] [i_3])), (arr_8 [i_0] [i_1] [i_3])))))));
                var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) arr_5 [i_1 + 1] [i_0 - 1]))));
                var_28 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 4294967290U)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_10))))) ? (var_8) : (((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_2 [i_1 - 1])) + (((/* implicit */int) var_3)))))))));
                var_29 = ((/* implicit */unsigned long long int) var_5);
            }
            var_30 = ((/* implicit */short) var_3);
            /* LoopNest 3 */
            for (unsigned char i_4 = 4; i_4 < 7; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 8; i_6 += 2) 
                    {
                        {
                            arr_18 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (var_12)));
                            arr_19 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0 + 1] [i_6 - 2]))));
                            var_31 &= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) : (10567364936490535711ULL)))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned short i_7 = 2; i_7 < 17; i_7 += 1) 
    {
        arr_23 [i_7] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((arr_20 [i_7 + 2]) - (((/* implicit */int) var_5))))), (arr_22 [i_7])));
        arr_24 [16] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_7 + 2])))))))));
    }
    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 2) 
    {
        arr_27 [(signed char)5] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))))) : (arr_21 [i_8])))) || (var_2)));
        arr_28 [i_8] = (~(((/* implicit */int) var_0)));
        arr_29 [i_8] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)24798)) != (1559178228)))) != (-1559178228)));
    }
}
