/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239191
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) 9223372036854775796LL);
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)-26848))) % (-4484621708429321487LL)))))));
                        var_20 = ((((/* implicit */_Bool) -4588999408664324311LL)) ? (((/* implicit */int) (unsigned char)240)) : (343792928));
                    }
                } 
            } 
        } 
        arr_13 [i_0] |= ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44670))) >= (arr_8 [i_0] [i_0]))) ? (((/* implicit */int) ((4294967295U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127)))))) : (((/* implicit */int) var_18))));
        arr_14 [i_0] [i_0] = ((/* implicit */signed char) (-((-((-(arr_8 [i_0] [i_0])))))));
    }
    for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) ((arr_4 [i_4] [i_4]) ? (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_11 [i_4] [6U] [i_4] [i_4] [i_4])))))) : (arr_10 [i_4] [(unsigned short)6] [(unsigned short)6] [(unsigned short)6] [4] [i_4])));
        arr_18 [i_4] = ((/* implicit */unsigned short) (-((-(((((/* implicit */_Bool) (unsigned short)44670)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20865))) : (arr_7 [i_4] [16U] [16U] [i_4])))))));
        var_22 *= ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [16LL] [16LL]))) >= (arr_7 [i_4] [i_4] [i_4] [6U])))) : ((~(((/* implicit */int) var_6))))))) ? (((((/* implicit */_Bool) ((unsigned char) var_18))) ? (4294967295U) : (4294967283U))) : ((((-(arr_8 [i_4] [i_4]))) % (((/* implicit */unsigned int) var_1)))));
    }
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        var_23 |= ((/* implicit */short) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_2))))) >= (min((((/* implicit */unsigned int) arr_20 [i_5])), (4294967288U))))) ? (((/* implicit */long long int) (-(((((/* implicit */int) (signed char)63)) + (((/* implicit */int) (unsigned char)221))))))) : (((long long int) ((((/* implicit */_Bool) arr_7 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) var_4)))))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            for (short i_7 = 1; i_7 < 14; i_7 += 2) 
            {
                {
                    var_24 = ((/* implicit */short) (((-(max((arr_8 [i_5] [i_5]), (arr_2 [i_6]))))) >= (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-21665), (((/* implicit */short) (unsigned char)234))))))));
                    var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((signed char) (_Bool)1))))) ? (((((/* implicit */_Bool) max((var_17), (((/* implicit */unsigned int) arr_10 [i_6] [i_6] [i_5 + 1] [(unsigned short)1] [i_7 - 1] [i_7 + 1]))))) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) ((((/* implicit */int) var_7)) >= (arr_25 [i_7] [(unsigned char)12] [(unsigned char)12] [i_7])))))) : (((((/* implicit */int) ((((/* implicit */int) (unsigned char)201)) >= (((/* implicit */int) (unsigned short)58336))))) % (arr_25 [i_7 - 1] [i_7 + 1] [i_7] [i_7]))))))));
                    arr_27 [i_5] = ((/* implicit */_Bool) ((min((((/* implicit */long long int) 1940743540U)), (-5919705833920228811LL))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21686)) ? (2354223755U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5] [i_5])))))) ? ((~(-4378991089245774524LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_16)) >= (var_1)))))))));
                    arr_28 [i_5] [i_6] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [4LL] [i_6]))) : (arr_7 [i_5] [i_5] [i_5] [i_5])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [(signed char)12] [i_7] [(signed char)12])) ? (1896702808U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_6])))))) : (((((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_5] [i_7 - 1] [i_6])) ? (((/* implicit */long long int) var_1)) : (-5919705833920228811LL)))))) ? (((/* implicit */long long int) (+(((/* implicit */int) max((var_2), (arr_5 [(unsigned char)6] [i_5 + 1]))))))) : (max((((/* implicit */long long int) 8U)), (-5919705833920228811LL)))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((-5919705833920228835LL) >= (var_15))))) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? ((~(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (short)4441)))))))));
    var_27 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) var_6)) % (((/* implicit */int) (_Bool)1)))) >= (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)6503)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 18446744073709551615ULL)))) : ((((~(-5919705833920228862LL))) ^ ((~(3048781083526268473LL)))))));
}
