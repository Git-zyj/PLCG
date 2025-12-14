/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237316
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
    var_15 = ((/* implicit */unsigned short) (short)19472);
    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (~(((/* implicit */int) (short)-19472)))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned int) ((min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_1 [i_0] [i_0]))) == (((/* implicit */long long int) ((/* implicit */int) (((~(arr_1 [i_0] [i_0]))) <= (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)74)) ^ (((/* implicit */int) (_Bool)1)))))))))));
        var_18 = ((/* implicit */long long int) max((var_18), ((+(max((((/* implicit */long long int) (signed char)106)), (-5495926725063009554LL)))))));
        var_19 = ((/* implicit */int) arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_2 = 1; i_2 < 11; i_2 += 4) 
        {
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_2 + 4] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)165))) + (arr_1 [6] [i_1])))) : (((((/* implicit */_Bool) 7473980018910261121ULL)) ? (((/* implicit */unsigned long long int) arr_7 [i_1] [i_2 + 1] [i_2 - 1])) : (17892828134651164075ULL)))));
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2 + 1] [i_2 - 1] [i_1]))) / (arr_7 [i_2 + 1] [i_2 - 1] [(signed char)14]))))));
            var_22 = ((/* implicit */unsigned short) ((9349409964477520589ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-50)))));
        }
        for (short i_3 = 0; i_3 < 15; i_3 += 3) 
        {
            arr_12 [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) ((short) (unsigned char)5));
            /* LoopSeq 3 */
            for (int i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (-(2090023281))))));
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 17892828134651164075ULL)) ? (((/* implicit */int) (short)25075)) : (253952)))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) >= (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) arr_6 [i_1] [i_3] [(_Bool)1])))) >= (((((/* implicit */int) var_10)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))))))));
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_4] [i_1])) / (((/* implicit */int) (_Bool)1))))), ((-(min((var_11), (arr_4 [i_4]))))))))));
                arr_16 [i_4] [i_1] = ((/* implicit */short) (~(-253971)));
            }
            /* vectorizable */
            for (int i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned int) arr_8 [i_1]);
                arr_19 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)63463)) ? (((/* implicit */int) arr_14 [i_1] [i_3] [(unsigned char)4])) : (((/* implicit */int) arr_14 [i_1] [i_3] [i_3]))));
                var_27 ^= ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)3)) % (((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned char)39))))));
                var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16839331604662560337ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)127))) : (1121501860331520ULL)))) ? (arr_15 [i_5] [i_3] [i_1]) : (((((/* implicit */long long int) var_5)) | (arr_13 [i_3]))))))));
            }
            for (int i_6 = 0; i_6 < 15; i_6 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 15; i_7 += 4) 
                {
                    for (int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (arr_13 [i_7])));
                            var_30 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_1] [i_7])))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_11 [i_1] [i_6])) - (67)))))) || (((/* implicit */_Bool) (unsigned char)120)))))));
                arr_28 [i_6] [i_3] = max((((int) arr_4 [i_3])), (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_6] [i_6] [i_3] [i_1])) && (((/* implicit */_Bool) arr_27 [i_6] [i_6] [i_1] [i_1]))))));
                var_32 -= ((/* implicit */unsigned short) (((((~(((/* implicit */int) arr_20 [i_6] [i_1])))) + (2147483647))) << (((((-7546303328072686041LL) & (arr_1 [i_1] [i_6]))) - (145840401828348929LL)))));
            }
            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))))));
        }
        for (unsigned short i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            var_34 = ((/* implicit */int) max((var_34), (((/* implicit */int) var_8))));
            arr_32 [i_1] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((max((304269437U), (((/* implicit */unsigned int) var_14)))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_9])))))) ? (((/* implicit */int) arr_11 [i_9] [i_1])) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)22)) * (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_6))))));
            /* LoopSeq 1 */
            for (long long int i_10 = 0; i_10 < 15; i_10 += 2) 
            {
                var_35 = ((/* implicit */unsigned short) (~((~(arr_21 [i_1] [i_10])))));
                arr_35 [i_1] [i_9] [i_10] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)31744))));
                var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((/* implicit */int) max((arr_17 [i_10] [i_9] [i_9] [i_1]), (arr_17 [i_1] [i_10] [i_9] [i_1])))) <= (min((((/* implicit */int) arr_6 [i_1] [i_9] [i_10])), (((((/* implicit */int) arr_0 [i_9] [i_10])) * (((/* implicit */int) (signed char)-96)))))))))));
                var_37 = ((/* implicit */unsigned short) var_2);
            }
        }
        var_38 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_3 [i_1] [i_1])), (((((var_7) + (9223372036854775807LL))) << (((532575944704LL) - (532575944704LL)))))))) >= ((+(((((/* implicit */_Bool) arr_7 [i_1] [(signed char)10] [10LL])) ? (17892828134651164075ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
    }
    var_39 = var_4;
}
