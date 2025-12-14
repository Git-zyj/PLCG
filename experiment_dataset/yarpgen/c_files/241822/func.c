/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241822
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
    var_13 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) max(((unsigned short)45991), (((/* implicit */unsigned short) var_8))))) / (((/* implicit */int) var_8)))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) var_5)), (((var_1) % (((/* implicit */int) var_3))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_0)) ? (0U) : (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_9)))))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_4)) : (9223372036854775802LL)))) : (((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned long long int) var_4)) : (var_6)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
        var_15 = ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((var_1) % (((/* implicit */int) (_Bool)1)))) / ((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_0 [i_0]))))) : (2671686366550150948ULL)));
        arr_5 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */int) (unsigned short)34497)) * (((/* implicit */int) arr_2 [i_0] [i_0])))), (((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [12U] [12U])), (var_11)))) ? (((((/* implicit */_Bool) max((arr_7 [i_1] [i_1]), (((/* implicit */unsigned long long int) (unsigned short)19))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (-3818166544447668402LL)))) : (arr_7 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1])))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned short) arr_7 [i_1] [i_1]);
        var_16 = ((/* implicit */unsigned long long int) arr_1 [(signed char)8]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_3 = 1; i_3 < 17; i_3 += 4) 
        {
            arr_15 [i_3] [(unsigned short)10] [i_2] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [8])) ? (((/* implicit */long long int) max((-647431140), (((/* implicit */int) arr_2 [i_3 + 1] [4U]))))) : (max((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)109))) / (var_11))), (((/* implicit */long long int) ((((/* implicit */int) (signed char)-74)) / (((/* implicit */int) (_Bool)1)))))))));
            var_17 = ((/* implicit */int) ((unsigned char) var_3));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                for (long long int i_6 = 3; i_6 < 16; i_6 += 2) 
                {
                    {
                        var_18 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */int) arr_19 [i_4 + 2] [i_4 + 2] [i_4 + 1])) : (((/* implicit */int) arr_19 [i_4 - 1] [i_4 + 2] [i_4 - 1])))) % (max(((-(((/* implicit */int) arr_1 [16])))), (((((/* implicit */_Bool) arr_21 [i_6] [i_5] [i_5] [1] [i_2] [i_2])) ? (((/* implicit */int) arr_1 [10ULL])) : (0)))))));
                        arr_23 [i_6] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned char) arr_6 [i_2])), (var_9))), (arr_16 [i_4 - 1] [i_4 - 1] [i_6 - 3])))) ? ((-(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) ((arr_2 [i_2] [12LL]) ? (((/* implicit */int) (short)12547)) : (var_1)))) ? (((/* implicit */int) arr_1 [16ULL])) : (((/* implicit */int) max(((short)-12565), (((/* implicit */short) var_2)))))))));
                        var_19 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) -1241818793)) ? (((/* implicit */int) arr_13 [i_4 + 2] [i_6 - 1])) : (((/* implicit */int) arr_13 [i_4 + 2] [i_6 + 1]))))) < (max((((/* implicit */long long int) ((((/* implicit */int) var_10)) % (var_1)))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)76))) : (-1017624305037906592LL)))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)3)) / (-1826690230)))) ? (((/* implicit */int) (unsigned short)43980)) : (((/* implicit */int) arr_6 [i_2])))), (((/* implicit */int) arr_19 [i_2] [i_2] [i_2])))))));
    }
}
