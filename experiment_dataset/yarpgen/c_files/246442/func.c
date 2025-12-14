/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246442
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) (~(arr_1 [i_0] [i_0])))) : (var_0)))) ? (((((/* implicit */_Bool) 2241730335662836476LL)) ? (5003982960765040804ULL) : (((/* implicit */unsigned long long int) 3936657522U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        arr_2 [(_Bool)1] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-32))))) > (((var_6) - (((/* implicit */long long int) 810668381)))))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (-810668380))))));
    }
    for (signed char i_1 = 3; i_1 < 16; i_1 += 4) 
    {
        var_14 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1 - 2])) ? (((/* implicit */int) arr_5 [i_1 - 3] [i_1 + 3])) : (((/* implicit */int) arr_6 [i_1 + 1]))))));
        var_15 = ((/* implicit */_Bool) min((min((((short) var_10)), (((/* implicit */short) ((signed char) arr_6 [i_1]))))), (((/* implicit */short) ((_Bool) arr_4 [i_1 - 1])))));
        var_16 = ((/* implicit */long long int) ((var_0) <= (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (unsigned short)7846))))), (358309773U))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (short i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                {
                    arr_12 [(unsigned short)14] &= ((/* implicit */long long int) (signed char)31);
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 3; i_4 < 18; i_4 += 1) 
                    {
                        var_17 *= ((/* implicit */short) ((long long int) ((((/* implicit */int) (signed char)31)) << (((((((/* implicit */int) (short)-1)) + (32))) - (6))))));
                        var_18 = ((/* implicit */short) min((var_18), (((short) var_0))));
                        /* LoopSeq 3 */
                        for (long long int i_5 = 1; i_5 < 16; i_5 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((unsigned short) 358309773U)))));
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) - (((/* implicit */int) ((short) 3936657522U)))))) ? (((((/* implicit */_Bool) min((((/* implicit */short) (signed char)-52)), (arr_7 [(signed char)1])))) ? (((((/* implicit */_Bool) 4222563866U)) ? (var_0) : (((/* implicit */unsigned long long int) var_11)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) : (((/* implicit */unsigned long long int) arr_16 [i_2] [i_2] [i_2] [i_4] [i_5 - 1] [i_5 + 2] [i_2]))));
                            arr_17 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */int) ((((/* implicit */int) var_2)) <= (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_14 [i_2])) : (((/* implicit */int) arr_13 [i_1 - 3]))))));
                            arr_18 [i_4] [i_4] [i_3] [i_4 - 3] [i_2] = ((signed char) 1206440350011815271LL);
                            arr_19 [(short)10] [(short)10] [i_3] [2] [16ULL] &= (short)-28305;
                        }
                        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            arr_24 [i_1] [i_2] [i_2] [i_4 + 1] [i_3] [i_2] [i_3] = ((/* implicit */_Bool) (~(((unsigned long long int) arr_22 [16ULL] [2ULL] [i_1 - 3] [i_4] [i_4 - 1]))));
                            arr_25 [i_1] [(short)10] [i_3] [i_3] [i_4] [i_6] [10ULL] |= ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_12)) ? (var_11) : (var_11)))))));
                            arr_26 [(short)4] [i_2] [i_2] [i_3] [i_4] [i_6] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) 8796093022208ULL)) ? (arr_16 [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4] [i_4] [i_4 - 1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) / (((((/* implicit */_Bool) arr_15 [i_4 - 1] [i_4] [i_4 - 2] [i_4] [i_4 - 3] [i_4])) ? (((/* implicit */long long int) arr_16 [i_4 - 3] [(_Bool)1] [(unsigned short)4] [i_4 + 1] [i_4] [i_4] [i_4 + 1])) : (1206440350011815271LL)))));
                            arr_27 [i_6] [i_6] [i_3] [i_6] [i_2] [i_2] [(unsigned short)5] = ((/* implicit */_Bool) ((-2241730335662836473LL) + (-5346126082655374353LL)));
                            var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [(unsigned char)4] [2] [(unsigned char)4]))) : (-9223372036854775796LL)));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_22 += ((/* implicit */signed char) ((min((-2241730335662836477LL), (((/* implicit */long long int) var_11)))) / (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
                            var_23 = (signed char)(-127 - 1);
                            arr_30 [i_3] = ((/* implicit */int) var_7);
                        }
                    }
                }
            } 
        } 
    }
    var_24 = ((/* implicit */signed char) ((((((/* implicit */int) ((var_6) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-52)))))) <= (((/* implicit */int) (short)-4655)))) ? (((/* implicit */int) var_1)) : (var_11)));
    var_25 += ((/* implicit */unsigned int) var_11);
}
