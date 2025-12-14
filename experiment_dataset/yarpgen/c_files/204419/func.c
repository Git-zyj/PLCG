/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204419
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
    var_10 = ((/* implicit */int) max((var_10), (((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)43)) - (((/* implicit */int) (unsigned char)33))))) ? (1018762619U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) == (1018762619U))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 8; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] [10U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned long long int) (~(min((arr_1 [i_1]), (((/* implicit */long long int) arr_3 [i_0] [i_1])))))))));
                var_11 = ((/* implicit */short) arr_2 [i_0]);
                var_12 = ((/* implicit */unsigned short) (-(((1018762606U) - (3276204677U)))));
                arr_7 [i_1] = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) arr_2 [6LL])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */int) max((((((/* implicit */_Bool) ((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? ((-(var_0))) : ((~(-3417433611554349124LL))))), (((/* implicit */long long int) min((((int) var_4)), ((-(var_8))))))));
    var_14 = ((/* implicit */long long int) (~(((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
    /* LoopSeq 2 */
    for (long long int i_2 = 1; i_2 < 12; i_2 += 3) 
    {
        arr_10 [i_2] |= ((/* implicit */long long int) (-(4294967295U)));
        arr_11 [(short)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_8))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_2 + 2])) % (((/* implicit */int) var_2)))))));
    }
    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 2) 
    {
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) max((arr_13 [i_3]), (((/* implicit */int) (signed char)0))))), ((-(arr_12 [i_3])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_12 [i_3])) : (arr_14 [i_3 - 1])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))))) : (max((arr_14 [i_3 + 1]), (((/* implicit */unsigned long long int) arr_13 [i_3])))))) : (((/* implicit */unsigned long long int) ((((_Bool) arr_13 [i_3 - 1])) ? (((long long int) var_5)) : (((/* implicit */long long int) (+(-2046945967)))))))));
        var_16 = ((/* implicit */short) max(((~(max((((/* implicit */unsigned long long int) arr_12 [i_3])), (arr_14 [i_3]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64))) : (1018762619U))))));
        /* LoopNest 3 */
        for (short i_4 = 1; i_4 < 16; i_4 += 2) 
        {
            for (long long int i_5 = 2; i_5 < 17; i_5 += 3) 
            {
                for (long long int i_6 = 1; i_6 < 18; i_6 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2046945967) % (((/* implicit */int) (signed char)-111))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) -2046945977)), (3276204677U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 1018762618U)))) : (((((/* implicit */_Bool) -1811544290)) ? (((/* implicit */long long int) 2046945977)) : (536913571470041915LL))))) : (((/* implicit */long long int) min((arr_12 [i_3 + 1]), (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))))))));
                        arr_23 [18U] [i_6] [i_3] [(signed char)15] [i_3] = ((/* implicit */unsigned char) ((unsigned short) min((arr_20 [i_3] [i_4] [i_3]), (arr_20 [i_3 - 1] [i_5 + 2] [(unsigned short)17]))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned int) max((var_18), (((((/* implicit */_Bool) ((arr_20 [5] [5] [i_3]) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 5870076130351970531LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)10))) : (3276204677U)))) : (((((/* implicit */_Bool) 3276204666U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32455))) : (0LL)))))) ? (3276204662U) : (((/* implicit */unsigned int) ((/* implicit */int) ((3341731839U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)7748)))))))))));
        /* LoopSeq 2 */
        for (long long int i_7 = 1; i_7 < 17; i_7 += 3) 
        {
            arr_26 [(unsigned short)12] [(unsigned short)12] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned char) 3341731839U)));
            /* LoopSeq 1 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 1; i_9 < 18; i_9 += 1) 
                {
                    for (short i_10 = 0; i_10 < 19; i_10 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)159)))), ((+(((arr_19 [i_3] [(_Bool)1]) - (arr_28 [i_3] [(short)11] [i_8] [(_Bool)1])))))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) var_2)))))) % (min((max((((/* implicit */unsigned int) arr_33 [i_3 + 1] [i_3] [i_3] [(_Bool)1] [i_3] [i_3] [5LL])), (arr_12 [6LL]))), (((/* implicit */unsigned int) arr_32 [i_10] [i_9 + 1] [i_7] [i_7] [(unsigned short)0]))))));
                        }
                    } 
                } 
                arr_34 [i_7] = ((/* implicit */short) ((int) (short)-1));
                arr_35 [(_Bool)1] [i_7] [i_3 + 1] [i_3 + 1] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((unsigned short) (short)-11246))) ? ((~(((/* implicit */int) var_6)))) : ((~(((/* implicit */int) var_5)))))));
                var_21 = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_15 [i_3 + 2]))))));
            }
        }
        for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 2) 
        {
            arr_39 [i_3] = ((/* implicit */short) (~(0)));
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_3])) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_21 [i_11] [0] [i_3] [i_3 - 1] [i_3 - 1] [i_3])), (arr_19 [i_3 - 1] [i_11 - 1])))) ? (min((arr_25 [i_3]), (((/* implicit */unsigned int) arr_17 [i_3] [i_3] [(_Bool)1])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)99)) ? (var_8) : (((/* implicit */int) arr_16 [i_3] [18LL] [i_11]))))))) : ((((!(((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) arr_32 [i_3] [i_11] [i_11] [i_3] [i_11])) ? (arr_19 [i_11] [i_11 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [0ULL]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_30 [13LL] [17ULL] [i_11] [i_11])) ? (arr_13 [i_11]) : (((/* implicit */int) var_6)))))))));
        }
    }
}
