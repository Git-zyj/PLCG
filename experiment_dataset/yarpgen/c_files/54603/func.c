/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54603
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
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(4294967294U)))) ? (((((/* implicit */_Bool) max(((unsigned char)161), (((/* implicit */unsigned char) (_Bool)1))))) ? (((((/* implicit */int) var_9)) % (((/* implicit */int) var_16)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)48109)) & (((/* implicit */int) var_6))))) ? (((/* implicit */int) max(((short)32767), (var_9)))) : (((/* implicit */int) ((signed char) (unsigned short)17426)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_19 *= ((/* implicit */_Bool) ((((arr_0 [i_0]) && (((/* implicit */_Bool) (signed char)43)))) ? (((/* implicit */int) (unsigned short)48130)) : (((/* implicit */int) var_10))));
        var_20 = ((/* implicit */int) ((unsigned short) (short)23762));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) (-(((/* implicit */int) var_10))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)9887))) ^ (4294895109U))))) < (max((arr_1 [i_1]), (arr_1 [i_1])))));
        var_22 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)1913))))));
    }
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_3 = 1; i_3 < 14; i_3 += 1) 
        {
            var_23 = ((/* implicit */_Bool) var_0);
            /* LoopNest 3 */
            for (unsigned int i_4 = 2; i_4 < 14; i_4 += 2) 
            {
                for (short i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    for (unsigned short i_6 = 2; i_6 < 15; i_6 += 3) 
                    {
                        {
                            arr_18 [i_4] [i_3 - 1] [i_2] [i_2] [i_6] = ((/* implicit */unsigned char) var_13);
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (short)-9903))));
                        }
                    } 
                } 
            } 
            var_25 = ((/* implicit */unsigned short) (~(var_3)));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_26 = ((/* implicit */_Bool) 4294967295U);
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 16; i_9 += 2) 
                {
                    {
                        var_27 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)216)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)1913))))));
                        var_28 = ((/* implicit */unsigned int) (-(arr_14 [(short)15] [i_2] [(short)15] [i_7] [i_2] [(short)15])));
                        var_29 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_7)) + (72))))));
                    }
                } 
            } 
        }
        var_30 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */int) arr_15 [i_2] [0U] [(unsigned char)14] [i_2] [i_2])))) - ((-(((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : ((~(var_3))));
    }
    for (unsigned int i_10 = 0; i_10 < 16; i_10 += 3) /* same iter space */
    {
        arr_32 [i_10] = ((/* implicit */short) (~(var_13)));
        /* LoopSeq 1 */
        for (signed char i_11 = 2; i_11 < 14; i_11 += 2) 
        {
            var_31 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_15 [i_11] [i_11] [i_11] [i_11] [i_11 + 1])) : (((/* implicit */int) (short)1912)))), (((int) arr_15 [i_11] [i_11] [i_11] [i_11] [i_11 - 1]))));
            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (-(((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_12)) : (var_15))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)0), ((unsigned char)4))))))))))));
            var_33 -= (-(((unsigned long long int) (~(((/* implicit */int) (short)-23763))))));
            var_34 = ((/* implicit */unsigned long long int) min((((4083306352U) & (2325801559U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(2851807468U)))) ? (((/* implicit */int) max((arr_23 [i_10]), (((/* implicit */unsigned short) (unsigned char)64))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))))))));
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7407)) ? (((/* implicit */unsigned long long int) var_4)) : (12ULL)))) || (((/* implicit */_Bool) max(((-2147483647 - 1)), (((/* implicit */int) arr_23 [i_11 - 2])))))));
        }
        arr_35 [i_10] [i_10] = ((/* implicit */unsigned int) (_Bool)0);
        var_36 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (unsigned char)0)), (max((((/* implicit */unsigned long long int) 3U)), (arr_14 [i_10] [(_Bool)1] [(_Bool)1] [i_10] [8U] [i_10])))));
    }
    var_37 = ((/* implicit */int) min((var_37), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_8)), (var_10)))) ? (((/* implicit */int) ((_Bool) var_3))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)-10331)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-42))))))))));
    var_38 = ((/* implicit */_Bool) (signed char)-74);
    var_39 = ((/* implicit */unsigned short) (-(((min((((/* implicit */unsigned int) (unsigned short)534)), (3387314050U))) + (((/* implicit */unsigned int) ((/* implicit */int) (short)23742)))))));
}
