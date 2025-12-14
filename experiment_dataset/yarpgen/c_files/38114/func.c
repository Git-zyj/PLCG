/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38114
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
    var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
    var_17 &= ((/* implicit */long long int) ((((((/* implicit */_Bool) max((-734949006), (-1126801433)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) (signed char)-74)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-74))) + (var_6))))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100))) != (var_15)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) min((max((((/* implicit */long long int) arr_0 [i_0])), (arr_1 [i_0] [i_0]))), (max((((/* implicit */long long int) 4294967295U)), (1632017040199021042LL)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (var_15) : (2566349222U)))) >= (arr_1 [i_0] [i_0]))) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-83))) : (33554424LL))))));
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        var_19 = ((/* implicit */signed char) ((arr_8 [i_0] [i_0] [i_0]) < (arr_8 [i_0] [i_0] [i_2])));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((((/* implicit */_Bool) -476014076)) ? (1649731896U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_3]))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_3])) ? (((/* implicit */int) var_0)) : (arr_7 [i_2] [(_Bool)1])))))))));
                    }
                } 
            } 
            var_21 = ((/* implicit */_Bool) (signed char)-1);
        }
    }
    for (long long int i_4 = 3; i_4 < 13; i_4 += 1) 
    {
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_4] [i_4] [i_4 - 1] [i_4])) | (arr_12 [i_4] [i_4])))) ? (((/* implicit */unsigned int) min((734948976), ((-(((/* implicit */int) (signed char)-91))))))) : (((((/* implicit */_Bool) 13495696506463804475ULL)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)6))) - (arr_5 [i_4]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4] [i_4 + 3])))))));
        /* LoopNest 3 */
        for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            for (signed char i_6 = 2; i_6 < 13; i_6 += 2) 
            {
                for (int i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    {
                        var_23 = ((1693027288U) * (((/* implicit */unsigned int) -1126801433)));
                        arr_22 [i_4 + 1] [(_Bool)1] [i_7] = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)167))) * (1649731896U)))));
                        var_24 = ((/* implicit */int) max((var_24), ((+(((/* implicit */int) arr_6 [i_4 + 3] [i_4 - 3] [i_6 + 2] [i_6 - 2]))))));
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)28815)) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_21 [i_4] [5LL] [i_6] [i_6] [i_4])) - ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_13 [i_4] [i_5])))))) : (((((/* implicit */_Bool) max((arr_13 [i_4] [15U]), (((/* implicit */unsigned int) (signed char)-18))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)82)), (14523437848267445133ULL))) : (((/* implicit */unsigned long long int) 734948974))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 4 */
        for (int i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                for (unsigned long long int i_10 = 1; i_10 < 14; i_10 += 1) 
                {
                    {
                        arr_31 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) 15245672042014139489ULL))) == (((/* implicit */int) arr_30 [i_4] [i_4] [i_9] [i_10]))));
                        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((+(2369981170U)))))) || (((/* implicit */_Bool) arr_27 [i_4] [i_4]))));
                    }
                } 
            } 
            arr_32 [i_4] = ((/* implicit */int) (~(6722069159660058634LL)));
            var_27 -= ((/* implicit */long long int) arr_14 [i_8]);
        }
        for (signed char i_11 = 0; i_11 < 16; i_11 += 1) /* same iter space */
        {
            var_28 |= ((/* implicit */int) ((((/* implicit */long long int) (+(837000838U)))) / (((long long int) arr_24 [i_4 + 2] [i_4]))));
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                for (signed char i_13 = 0; i_13 < 16; i_13 += 1) 
                {
                    {
                        var_29 = arr_18 [i_4 + 3] [i_4 + 2] [i_4 + 3];
                        var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) arr_34 [(unsigned char)4] [i_11] [i_13]))));
                        arr_41 [i_4] [i_11] [i_13] = ((/* implicit */unsigned short) 450732611);
                        var_31 = ((/* implicit */signed char) arr_12 [i_4 - 2] [i_4 - 2]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_14 = 1; i_14 < 14; i_14 += 2) 
            {
                for (unsigned long long int i_15 = 0; i_15 < 16; i_15 += 3) 
                {
                    {
                        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)116)), (arr_13 [i_14 - 1] [i_4 - 2])))) | (((((((/* implicit */_Bool) 23)) ? (((/* implicit */unsigned long long int) arr_13 [i_4 - 2] [i_4 - 2])) : (arr_19 [i_15] [i_11] [i_15] [i_11]))) - (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 526079827)), (6842547415178324480LL)))))))))));
                        arr_46 [i_4] = ((/* implicit */unsigned char) -734948974);
                    }
                } 
            } 
        }
        for (signed char i_16 = 0; i_16 < 16; i_16 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned long long int) -6842547415178324481LL);
            /* LoopSeq 1 */
            for (unsigned char i_17 = 3; i_17 < 15; i_17 += 1) 
            {
                var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_4] [13U] [i_4])) ? (((/* implicit */long long int) 467897015U)) : (min((arr_1 [i_4] [i_4 + 2]), (((/* implicit */long long int) (signed char)-115))))))) ? (((((/* implicit */_Bool) ((((((/* implicit */int) var_5)) + (2147483647))) >> (((arr_48 [i_4] [(unsigned short)11] [i_17]) - (2807414532U)))))) ? (((/* implicit */long long int) arr_18 [i_17 - 2] [i_17 - 2] [i_17 - 2])) : (((-3873431560998899758LL) % (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_16] [10] [10]))))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 734948974)))))))))));
                var_35 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) 140737488347136LL))) ? (((max((((/* implicit */unsigned int) -1925202288)), (3734231706U))) / (((/* implicit */unsigned int) (-(arr_38 [i_4] [i_4])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)54))))) >= (((/* implicit */int) ((((/* implicit */int) arr_14 [i_17])) < (((/* implicit */int) var_9)))))))))));
                arr_54 [i_4] [i_4] [i_4 + 3] = ((/* implicit */long long int) ((arr_48 [i_4 + 2] [i_16] [i_17 + 1]) < (((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_4 + 3])) - (((/* implicit */int) arr_15 [i_4 + 3])))))));
            }
            var_36 &= ((((/* implicit */_Bool) -1126801433)) ? (1126801432) : (((/* implicit */int) (signed char)115)));
        }
        /* vectorizable */
        for (unsigned long long int i_18 = 2; i_18 < 15; i_18 += 1) 
        {
            var_37 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -6842547415178324490LL)) * (7956680162773257624ULL)));
            arr_57 [i_18] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_44 [i_4 - 2] [i_4] [i_4 - 2] [i_4 - 2]))))));
        }
        var_38 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4]))) + (arr_49 [i_4] [i_4])))) && (((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned short)34503)))))))));
    }
}
