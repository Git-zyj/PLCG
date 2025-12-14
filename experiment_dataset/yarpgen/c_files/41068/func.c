/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41068
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_13 += ((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))));
        var_14 = ((/* implicit */unsigned long long int) var_6);
        var_15 = ((/* implicit */unsigned short) min((((unsigned int) arr_0 [i_0])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1] [(_Bool)0])) >> (((((/* implicit */int) arr_4 [i_2] [i_2 + 1] [i_2])) - (80))))))));
                var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0]))));
            }
            var_18 = ((/* implicit */_Bool) ((short) arr_4 [i_1 + 1] [i_1] [i_1 + 1]));
            var_19 ^= ((signed char) arr_1 [i_1 + 1]);
            /* LoopSeq 4 */
            for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
            {
                arr_8 [10ULL] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_4);
                var_20 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [i_3]))));
                var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_3] [i_1 - 2] [i_0])) : (((/* implicit */int) arr_6 [i_0])))))));
            }
            for (unsigned short i_4 = 3; i_4 < 10; i_4 += 4) 
            {
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_9 [i_1 + 1] [i_4 - 2]))));
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    arr_14 [i_0] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_1 [i_4 - 1]);
                    var_22 &= ((/* implicit */signed char) arr_10 [i_1] [(short)8] [i_1 - 2]);
                }
                arr_15 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_0]))));
                var_23 = ((/* implicit */_Bool) max((var_23), (((((/* implicit */int) arr_12 [(_Bool)1] [i_4 - 3] [(_Bool)1] [i_4])) == (((/* implicit */int) arr_7 [i_0] [i_1 - 2] [i_4] [i_4 + 1]))))));
            }
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    var_24 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) (unsigned char)142)))))));
                    var_25 += ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1] [i_1 - 2] [i_1 + 1])) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) arr_12 [i_1 + 1] [i_1] [i_1] [i_1]))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    arr_25 [i_0] [i_1] [i_0] [i_8] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)108)) | (((/* implicit */int) (_Bool)1))));
                    var_26 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_1 - 1] [i_1])) >= (((/* implicit */int) var_12))));
                    var_27 = ((/* implicit */unsigned char) max((var_27), ((unsigned char)217)));
                }
                var_28 |= ((/* implicit */long long int) arr_3 [i_1 - 1] [i_1 - 1] [i_6]);
            }
            for (long long int i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                var_29 ^= arr_23 [(short)0] [i_0] [i_0] [i_0];
                var_30 *= ((/* implicit */signed char) arr_13 [i_0] [i_1] [(unsigned short)8]);
                arr_28 [i_0] [i_0] [i_1 - 2] [i_9] = ((/* implicit */unsigned char) arr_10 [i_0] [i_1] [i_0]);
                arr_29 [i_9] = ((((/* implicit */int) (unsigned short)16382)) == ((+(((/* implicit */int) (signed char)-92)))));
            }
        }
        for (signed char i_10 = 0; i_10 < 11; i_10 += 2) 
        {
            arr_33 [i_10] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */long long int) min((((((/* implicit */int) arr_12 [i_0] [i_10] [i_10] [i_10])) & (((/* implicit */int) (signed char)115)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_10])))))))) + ((+(((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_10])))))))));
            arr_34 [i_10] = ((/* implicit */signed char) max((arr_26 [i_0] [7LL] [i_10]), (arr_13 [i_0] [i_0] [i_10])));
        }
        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (_Bool)0))));
    }
    for (unsigned int i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
    {
        arr_37 [i_11] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_11] [i_11] [i_11]))));
        /* LoopSeq 2 */
        for (unsigned char i_12 = 3; i_12 < 10; i_12 += 4) /* same iter space */
        {
            arr_41 [i_11] [i_11] [i_12 + 1] = ((/* implicit */signed char) (~(((/* implicit */int) arr_9 [i_11] [i_11]))));
            arr_42 [i_11] = ((/* implicit */_Bool) (~(max((((((/* implicit */int) (signed char)127)) - (((/* implicit */int) arr_3 [i_11] [1LL] [i_12])))), (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) (_Bool)0)))))))));
            arr_43 [i_11] [(unsigned char)1] = ((/* implicit */long long int) ((arr_20 [i_12] [i_12] [i_12] [i_12 - 2]) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-105)))));
        }
        for (unsigned char i_13 = 3; i_13 < 10; i_13 += 4) /* same iter space */
        {
            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)255))))), ((signed char)107)))) ? (arr_17 [i_13] [i_11]) : ((+(((/* implicit */int) arr_32 [i_13 - 3] [i_13 - 2])))))))));
            var_33 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((arr_45 [i_13 + 1]) && (((/* implicit */_Bool) arr_5 [i_11] [i_13 - 1] [i_13 - 2] [i_13])))))));
            var_34 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) max((arr_3 [i_11] [i_11] [i_11]), ((_Bool)1)))) << (((/* implicit */int) arr_7 [i_13 - 1] [i_13 - 3] [i_13 - 3] [i_13 - 3])))))));
            arr_46 [i_11] [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((arr_39 [i_13] [i_11] [i_11]), (((/* implicit */long long int) arr_30 [i_13] [i_11]))))) && (((/* implicit */_Bool) arr_30 [i_11] [i_11])))) ? (((/* implicit */unsigned long long int) min((3016736297U), (((/* implicit */unsigned int) (signed char)111))))) : (min((((((/* implicit */_Bool) arr_26 [i_11] [i_11] [i_13 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_11] [i_11]))) : (var_1))), (((/* implicit */unsigned long long int) ((var_11) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))));
            /* LoopSeq 2 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_49 [i_13 - 1] [i_11] [i_13 - 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (max((arr_2 [(unsigned short)9] [i_13 - 1] [i_13]), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) arr_45 [i_14])), (arr_6 [4U]))))))));
                arr_50 [i_11] [i_11] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_0 [i_13 - 2]), (arr_0 [i_13 - 2])))) == (((/* implicit */int) arr_0 [i_13 - 3]))));
            }
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) (~((-(min((arr_51 [i_15] [i_13] [(_Bool)1] [i_11]), (((/* implicit */unsigned int) arr_38 [(unsigned char)8] [i_13 + 1])))))))))));
                var_37 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((273367704U) & (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (((/* implicit */unsigned char) arr_5 [i_11] [i_13 - 2] [(_Bool)1] [i_15]))))))))) ? (((/* implicit */int) ((max((((/* implicit */long long int) arr_22 [i_15] [i_11])), (-8255656743954865960LL))) > (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_9 [i_13 - 2] [i_13])) : (((/* implicit */int) var_8)))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)198)) ? (arr_17 [i_11] [i_15]) : (((/* implicit */int) arr_31 [i_11])))) == (((/* implicit */int) ((unsigned char) arr_49 [i_11] [(unsigned short)8] [i_15]))))))));
            }
        }
        /* LoopSeq 1 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_38 = ((/* implicit */unsigned char) max((var_38), (((/* implicit */unsigned char) (_Bool)1))));
            var_39 -= ((/* implicit */unsigned char) ((((var_7) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) (_Bool)1)))))))) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)245)))));
            var_40 = ((((/* implicit */int) var_3)) * (((/* implicit */int) (signed char)60)));
        }
    }
    /* LoopNest 2 */
    for (signed char i_17 = 3; i_17 < 15; i_17 += 1) 
    {
        for (unsigned long long int i_18 = 0; i_18 < 17; i_18 += 4) 
        {
            {
                var_41 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) 8418344006896257748LL)))))) ? (((/* implicit */int) (unsigned short)41109)) : (((/* implicit */int) (unsigned char)15))));
                arr_61 [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) / (((/* implicit */int) max((((/* implicit */short) (signed char)115)), ((short)0))))));
            }
        } 
    } 
    var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) ((((var_0) % (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)20)) && (((/* implicit */_Bool) (unsigned char)217)))))))))));
}
