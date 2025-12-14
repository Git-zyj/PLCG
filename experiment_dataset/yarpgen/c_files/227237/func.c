/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227237
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
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */signed char) ((int) (+(-1813299779))));
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 4; i_4 < 12; i_4 += 1) 
                        {
                            var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)0))))), (max((((/* implicit */unsigned char) var_3)), (arr_2 [i_0]))))))) != (((((/* implicit */_Bool) arr_12 [i_0 - 4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) % (arr_11 [8])))) : (min((arr_7 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_5)))))))))));
                            var_13 = ((((/* implicit */_Bool) (short)-32758)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_10 [4LL] [i_3 - 1] [i_2] [i_3] [i_4] [i_0 - 3] [i_0])))) : (((((/* implicit */_Bool) max(((signed char)-98), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) : (arr_4 [(signed char)2] [i_1] [i_2]))));
                        }
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            arr_16 [i_1] [i_1] = ((/* implicit */short) min((arr_3 [i_0 - 3] [i_1] [i_3 - 1]), (((/* implicit */unsigned int) arr_13 [i_0] [i_1]))));
                            var_14 = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) ((unsigned short) (_Bool)1))))));
                        }
                        arr_17 [i_0 - 4] [i_1] [i_0 - 4] [i_3 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) max((4084454854U), (((/* implicit */unsigned int) arr_8 [i_0])))))) ? (((/* implicit */int) (_Bool)1)) : (max((arr_12 [i_0]), (((/* implicit */int) arr_9 [i_0 - 4] [i_1] [i_2]))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            arr_22 [i_0] [i_6] = ((/* implicit */long long int) (!(((_Bool) arr_0 [i_0]))));
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 2) 
            {
                arr_25 [i_0] [i_6] [i_7] [i_6] = max(((_Bool)1), ((_Bool)1));
                var_15 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) (_Bool)1))) * (max((((/* implicit */int) ((((/* implicit */int) (unsigned char)1)) > (((/* implicit */int) arr_24 [i_0] [(_Bool)1]))))), ((~(((/* implicit */int) (short)3))))))));
                arr_26 [i_7] [i_7] [i_7 - 2] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_24 [i_0] [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)214)), ((unsigned short)17301))))) : (max((arr_23 [i_0 - 2] [i_7 + 2] [i_7] [i_6]), (((/* implicit */unsigned long long int) (unsigned char)216))))))));
            }
            for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
            {
                arr_29 [i_0] [2ULL] [i_8] [i_8 + 1] = ((/* implicit */_Bool) var_3);
                var_16 = ((/* implicit */unsigned int) ((max((arr_7 [i_6] [i_0 + 1]), (((/* implicit */unsigned long long int) ((short) arr_20 [i_8] [i_6] [i_8 + 1]))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)24297)) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)0), (((/* implicit */short) (unsigned char)42)))))) : (max((((/* implicit */unsigned int) var_8)), (829426162U))))))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 2) 
            {
                for (int i_10 = 1; i_10 < 11; i_10 += 1) 
                {
                    {
                        var_17 ^= ((/* implicit */unsigned int) ((((/* implicit */int) max(((_Bool)1), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (8969450152064229751LL)))))) > (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_0] [i_6])) || (((/* implicit */_Bool) arr_2 [i_0]))))))))));
                        var_18 = max((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_9] [i_10])))))) : (((2853890256970844900LL) - (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_6] [4ULL]))))))), (((/* implicit */long long int) 0)));
                        arr_34 [i_0 - 2] [i_6] [i_9] [i_10] [i_6] [i_6] = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((unsigned char) arr_10 [i_9] [i_6] [i_9] [i_10] [7LL] [i_10] [i_0 - 4]))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_33 [i_0] [i_6] [1ULL] [i_10] [i_9])))) : (((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_9] [i_9])) ? (-8522435261100076387LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9385))))))));
                        var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_0)), (max((arr_31 [i_0 - 3] [i_0 - 3] [i_9]), (((/* implicit */unsigned long long int) arr_0 [i_0])))))) << (((min((((/* implicit */unsigned long long int) arr_2 [i_6])), (max((8292018448896455863ULL), (((/* implicit */unsigned long long int) (unsigned short)53922)))))) - (1ULL))))))));
                    }
                } 
            } 
        }
    }
    var_20 = ((/* implicit */int) 2213789096U);
    var_21 &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), (var_10)))) && ((!(((/* implicit */_Bool) -6967479371547080886LL))))));
    var_22 = ((/* implicit */short) (((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-8522435261100076387LL))))) < (((/* implicit */long long int) ((/* implicit */int) var_8)))));
}
