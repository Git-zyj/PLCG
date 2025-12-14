/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202564
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
    var_19 = ((/* implicit */signed char) (((((~(((/* implicit */int) var_16)))) >= (var_2))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_0)))) ? ((-(var_17))) : (((((/* implicit */_Bool) -1109589485)) ? (1109589471) : (((/* implicit */int) (signed char)110)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_18)), (var_1)))))))) | (((var_14) * (((/* implicit */unsigned long long int) ((-1109589443) / (1109589463))))))));
        var_20 = ((/* implicit */long long int) var_11);
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_5 [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */signed char) ((((/* implicit */int) var_16)) <= (var_17)))), (var_15)));
            arr_6 [i_0] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_0 [i_0] [i_0 + 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (var_8)))) : (var_5)));
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)17089)) || (((/* implicit */_Bool) (signed char)113))))))))));
            var_22 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_12), (((/* implicit */short) arr_4 [i_0 + 2] [i_0 - 1] [i_0 + 2]))))) + (((/* implicit */int) var_6))));
            var_23 ^= ((/* implicit */signed char) min((max((arr_0 [i_0] [i_0 + 2]), (arr_0 [i_0 + 1] [i_0 + 1]))), ((+(arr_0 [8ULL] [i_0 + 1])))));
        }
        for (int i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) var_15)) + (((/* implicit */int) var_18))))) / (max((((/* implicit */long long int) (unsigned short)17107)), (var_7)))))) ? (((((/* implicit */_Bool) var_8)) ? (max((arr_1 [i_2] [i_0 - 1]), (-1109589481))) : (var_17))) : ((-(((/* implicit */int) (!(((/* implicit */_Bool) -1109589464))))))))))));
            var_25 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0 + 1])) ? (max((var_5), (((/* implicit */long long int) arr_0 [i_0 + 1] [i_0 + 1])))) : (((((/* implicit */_Bool) arr_4 [i_0 + 2] [i_2] [i_2])) ? (((/* implicit */long long int) var_8)) : (var_5)))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_2])) ? (var_17) : (((/* implicit */int) var_10))))) - (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_2]))) / (var_7))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_5) : (((/* implicit */long long int) -1109589479))))))))));
            var_26 = ((/* implicit */short) ((((((/* implicit */int) (signed char)111)) & (((((/* implicit */int) var_13)) / (var_17))))) >= ((-(-1109589473)))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    {
                        var_27 = ((/* implicit */long long int) ((((((/* implicit */int) ((signed char) max((var_5), (((/* implicit */long long int) var_13)))))) + (2147483647))) << (((max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_1 [i_0 + 2] [i_0])) : (var_14))), (((/* implicit */unsigned long long int) var_8)))) - (18446744072473650905ULL)))));
                        var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)95)))) | (((((/* implicit */_Bool) arr_4 [i_0 - 1] [3LL] [i_3])) ? (-1109589464) : (-1109589460)))))) ? (((((var_5) ^ (((/* implicit */long long int) -1109589472)))) ^ (((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_0] [(unsigned char)8] [i_4] [i_4]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_7)) ? (arr_0 [i_0 + 1] [i_0 + 1]) : (((/* implicit */int) var_16)))) : (min((((/* implicit */int) (unsigned char)17)), (var_2)))))))))));
                    }
                } 
            } 
        }
        for (short i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            var_29 ^= ((/* implicit */unsigned int) arr_14 [i_0] [i_0] [i_0] [i_5]);
            arr_18 [i_0] = ((/* implicit */signed char) arr_13 [i_0] [i_0] [i_0] [i_5]);
            arr_19 [i_5] [i_0] = ((/* implicit */signed char) var_5);
            var_30 = ((/* implicit */int) ((min((((/* implicit */long long int) arr_12 [i_0] [i_0] [i_0 + 2] [i_0 + 1] [i_0 + 2])), ((~(-6863115084756924584LL))))) - (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_11))))))))));
        }
        var_31 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) ((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_0] [i_0])))))) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])))))));
    }
    for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 4) /* same iter space */
    {
        var_32 -= ((/* implicit */short) ((((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (5178885102605578379LL)))) ? (max((((/* implicit */long long int) var_15)), (-6863115084756924584LL))) : (((/* implicit */long long int) (-(-1109589445)))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)17107))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_15 [i_6] [i_6] [i_6 + 2])) : (((/* implicit */int) arr_4 [i_6] [i_6] [i_6 - 1])))) : (((((/* implicit */_Bool) arr_7 [i_6] [1] [i_6 + 2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15)))))))));
        var_33 = ((/* implicit */unsigned short) (~((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) var_6))))))));
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            for (int i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                for (unsigned short i_9 = 3; i_9 < 7; i_9 += 3) 
                {
                    {
                        var_34 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(var_14))) + (((/* implicit */unsigned long long int) var_17))))) ? (((/* implicit */int) ((5178885102605578397LL) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_6] [i_6] [i_6] [i_6]))))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_21 [i_8] [i_6])) ? (1295983395357993000ULL) : (((/* implicit */unsigned long long int) arr_0 [i_6] [i_7])))) <= (((var_14) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))))));
                        var_35 += ((/* implicit */long long int) (-(((/* implicit */int) (short)25025))));
                        arr_31 [i_6] [i_7] = ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_7) == (((/* implicit */long long int) var_1)))))) > (((((/* implicit */_Bool) arr_16 [9] [1U])) ? (((/* implicit */long long int) 1109589436)) : (5178885102605578386LL)))))) * (((((((/* implicit */int) (short)32766)) / (((/* implicit */int) var_16)))) / (min((-1109589503), (arr_0 [i_6] [5]))))));
                    }
                } 
            } 
        } 
        arr_32 [2ULL] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (unsigned short)48440)) : (((/* implicit */int) (unsigned short)17098))));
    }
    var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) var_9))));
    var_37 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) | (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)2)))) : (var_0))) / (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
}
