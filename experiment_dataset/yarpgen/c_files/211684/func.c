/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211684
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_14 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_4 [(_Bool)1] [(signed char)12] [2LL]), (((/* implicit */unsigned char) ((_Bool) 3135938181949630366ULL)))))) ? (((/* implicit */int) ((var_5) && (((((/* implicit */_Bool) -2021932838)) || (((/* implicit */_Bool) var_11))))))) : (((/* implicit */int) var_5))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        arr_9 [10LL] [i_2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            arr_13 [i_3] [i_3] [i_3] [i_3] [i_1] = ((((unsigned int) 13689299081483682930ULL)) < (((/* implicit */unsigned int) var_7)));
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [15ULL] [i_0] [i_0] [i_0] [i_0])) / (((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_3] [i_2] [i_0])))))));
                            var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_8 [i_0] [i_3]))));
                        }
                        for (unsigned int i_5 = 0; i_5 < 18; i_5 += 1) 
                        {
                            var_17 |= ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4757444992225868675ULL)) ? (arr_6 [i_0] [i_1] [i_2] [11LL] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0])))))) ? (max((arr_5 [i_3] [i_0]), (((/* implicit */unsigned int) var_1)))) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (4757444992225868679ULL) : (((/* implicit */unsigned long long int) var_10))))))));
                            arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_17 [i_5] [i_3] [i_1] [i_0])), (3797517021974076882LL)))) ? (((/* implicit */long long int) ((arr_8 [i_0] [17LL]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22))) : (arr_15 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [(signed char)6])))) : (((((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [16LL] [i_0])) / (arr_2 [4LL] [i_1] [i_0])))))) * (((((/* implicit */_Bool) 3817256023U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_5] [5] [i_2] [i_1] [11LL] [i_0]))) : (((((/* implicit */_Bool) 5355769636748252528LL)) ? (4757444992225868679ULL) : (var_13)))))));
                        }
                        for (int i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            var_18 *= ((/* implicit */long long int) (((+(arr_20 [i_6] [i_3] [i_2] [i_0] [i_0]))) == (((/* implicit */unsigned long long int) ((long long int) arr_20 [i_6] [i_2] [i_2] [i_1] [15])))));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)24883), (((/* implicit */unsigned short) var_0)))))) * (((arr_3 [i_3]) ? (3326055006U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)115)))))))) / (((long long int) ((((/* implicit */_Bool) 13689299081483682914ULL)) ? (var_13) : (((/* implicit */unsigned long long int) var_10))))))))));
                            var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) ((long long int) 5527182328624748659LL))))), (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) > ((-(5813543116772602011LL)))))));
                            arr_21 [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_0] [i_0] [(_Bool)1] [i_3] [i_3])) ? (((/* implicit */int) ((arr_20 [i_0] [i_1] [i_2] [i_3] [i_6]) > (((((/* implicit */_Bool) 4757444992225868675ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (13689299081483682936ULL)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) arr_16 [i_6] [i_3] [i_1] [i_1] [i_0])) ^ (arr_2 [i_0] [i_0] [(signed char)3])))))))));
                        }
                        for (long long int i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            arr_24 [i_2] [i_7] [i_2] [i_3] [i_7] [i_0] [(_Bool)1] |= ((/* implicit */signed char) max((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), ((unsigned short)4000)))) || (((/* implicit */_Bool) ((unsigned short) -5813543116772602012LL))))), (((((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) != (((/* implicit */unsigned long long int) ((-5813543116772602012LL) & (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_7] [i_7]))))))))));
                            arr_25 [i_0] [i_0] [i_0] [i_0] [17] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_13)) ? (var_8) : (-5352202231045261741LL))), (((/* implicit */long long int) arr_11 [i_7] [i_3] [i_3] [i_2] [(_Bool)1] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_3 [i_7]))))) : (max((((/* implicit */long long int) arr_10 [i_7] [i_3] [i_1] [i_2] [i_1] [i_0])), (arr_23 [(_Bool)1] [(_Bool)1] [i_2] [i_3] [(_Bool)1] [i_7])))));
                        }
                        var_21 *= ((/* implicit */unsigned int) ((arr_8 [i_0] [i_2]) ? (arr_20 [i_0] [(unsigned char)7] [(unsigned char)7] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)23541)), (-2147483642)))) ? (((/* implicit */long long int) ((unsigned int) arr_14 [i_0] [(_Bool)1] [i_1] [i_2] [i_3]))) : ((+(var_8))))))));
                        arr_26 [(unsigned short)3] [i_1] [i_2] [(unsigned short)3] = ((/* implicit */signed char) (((+(max((((/* implicit */long long int) (unsigned short)44282)), (-4963062676489955607LL))))) - (((/* implicit */long long int) min((((/* implicit */int) max((var_3), (arr_19 [i_0] [(signed char)12] [i_0] [i_0] [i_0])))), ((~(((/* implicit */int) (unsigned short)65528)))))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_29 [i_0] [i_1] [i_2] [i_8] = ((/* implicit */int) (!(((((((/* implicit */_Bool) -8892791911473268904LL)) ? (5355769636748252528LL) : (arr_6 [i_0] [i_2] [i_2] [13U] [i_0]))) != (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (-2147483647 - 1)))))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 18; i_9 += 2) 
                        {
                            var_22 = ((/* implicit */long long int) max((((/* implicit */int) (!(arr_3 [i_0])))), (((arr_3 [i_1]) ? (((/* implicit */int) arr_3 [i_8])) : (((/* implicit */int) arr_3 [i_0]))))));
                            var_23 = ((/* implicit */unsigned char) ((arr_17 [i_0] [i_0] [i_2] [i_0]) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_30 [(unsigned short)10] [i_1] [i_0])) ? (arr_0 [i_8] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))) : ((-(((((/* implicit */_Bool) (signed char)-21)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                            arr_33 [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_22 [i_0]), (-802007254097790707LL)))) ? (arr_20 [i_9] [i_8] [2] [4U] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-89)))))) ? (((/* implicit */unsigned long long int) (+(var_8)))) : (((arr_0 [i_9] [i_9]) & (((/* implicit */unsigned long long int) (-(-802007254097790707LL))))))));
                        }
                    }
                    var_24 -= ((/* implicit */unsigned int) arr_22 [i_1]);
                    arr_34 [(_Bool)1] [(_Bool)1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) -8237787268493065439LL)) || (((/* implicit */_Bool) (-((+(-802007254097790723LL))))))));
                }
            } 
        } 
        arr_35 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (10628391535224609535ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3326055006U)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned char)142))))) : (((13689299081483682930ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
        arr_36 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((((/* implicit */_Bool) arr_10 [i_0] [(unsigned char)2] [i_0] [(unsigned char)2] [(unsigned char)2] [i_0])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)59094)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))) : (arr_6 [i_0] [i_0] [i_0] [0ULL] [i_0]))), (((/* implicit */long long int) var_2))))) : (((((/* implicit */_Bool) ((var_7) / (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((31525197391593472LL) < (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0]))))))) : (arr_0 [i_0] [i_0])))));
    }
    for (long long int i_10 = 0; i_10 < 18; i_10 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_11 = 2; i_11 < 16; i_11 += 1) 
        {
            for (long long int i_12 = 0; i_12 < 18; i_12 += 2) 
            {
                {
                    arr_44 [i_10] [i_11] [i_10] = ((/* implicit */int) (((~(((((/* implicit */_Bool) arr_42 [i_10] [15LL] [i_12])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_12 [(unsigned char)7] [i_11 + 1] [i_10])))))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)45771)) - (((/* implicit */int) arr_39 [i_10] [i_11 + 1] [i_11 + 1]))))))))));
                    arr_45 [i_11] [i_11] = max((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_38 [i_10])) ? (((/* implicit */int) arr_12 [i_10] [i_10] [i_12])) : (((/* implicit */int) arr_12 [i_10] [i_11] [i_12]))))) - (((((/* implicit */_Bool) arr_15 [i_10] [i_10] [i_10] [i_11] [i_11] [(signed char)4] [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)56182))) : (-316379763638374031LL))))), (((/* implicit */long long int) ((((arr_20 [3U] [3U] [i_11 - 2] [i_11] [i_12]) == (((/* implicit */unsigned long long int) arr_16 [i_10] [i_10] [i_10] [i_10] [i_10])))) ? (1584031112U) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_12)), ((unsigned char)2)))))))));
                }
            } 
        } 
        arr_46 [(signed char)14] [i_10] &= ((/* implicit */_Bool) (-(min((10560956525068359006ULL), (((/* implicit */unsigned long long int) (((_Bool)1) ? (5254250053205033414LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
    }
    for (long long int i_13 = 0; i_13 < 17; i_13 += 2) 
    {
        var_25 = ((/* implicit */int) (+(arr_2 [i_13] [i_13] [i_13])));
        arr_49 [i_13] |= ((((/* implicit */_Bool) arr_5 [i_13] [i_13])) || (((/* implicit */_Bool) ((short) max((var_13), (((/* implicit */unsigned long long int) arr_19 [i_13] [i_13] [i_13] [i_13] [i_13])))))));
    }
    for (long long int i_14 = 0; i_14 < 12; i_14 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_15 = 1; i_15 < 9; i_15 += 2) 
        {
            for (long long int i_16 = 0; i_16 < 12; i_16 += 4) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    {
                        arr_60 [i_14] [i_15] [i_14] [i_17] = ((/* implicit */short) ((long long int) min((arr_39 [i_14] [i_15 + 3] [i_15 + 3]), (((/* implicit */short) arr_8 [i_14] [i_15 - 1])))));
                        var_26 = ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)127)) : (-515924641))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)56182)) && (((/* implicit */_Bool) -1252404000)))))))));
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_59 [i_15 + 2] [8LL] [i_15 + 1] [i_17] [i_15 + 1] [i_15 + 2]), (arr_59 [i_14] [i_15] [i_15 + 1] [i_16] [i_17] [i_17])))) ? (((/* implicit */unsigned long long int) ((arr_14 [i_17] [i_16] [i_16] [i_15] [i_14]) << (((arr_14 [15LL] [i_15] [i_15] [i_15] [i_15 + 2]) - (3425839236516301531LL)))))) : (min((var_4), (13266504572533063875ULL)))));
                        arr_61 [9ULL] [i_15] [i_15] [i_15] [(unsigned short)4] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_15 + 2] [i_15] [i_15] [i_15] [i_15] [13U])))))) + (min((((/* implicit */unsigned long long int) max((4294967295U), (((/* implicit */unsigned int) var_0))))), (max((var_4), (((/* implicit */unsigned long long int) arr_56 [4] [i_15] [i_14]))))))));
                    }
                } 
            } 
        } 
        arr_62 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_14] [i_14])) ? ((((!(((/* implicit */_Bool) var_13)))) ? (-8892791911473268904LL) : (((/* implicit */long long int) arr_42 [i_14] [i_14] [i_14])))) : (((min((((/* implicit */long long int) arr_52 [i_14])), (-1041050888350000238LL))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        arr_63 [i_14] = ((/* implicit */unsigned char) (+(((/* implicit */int) min((arr_12 [i_14] [i_14] [i_14]), (arr_12 [i_14] [i_14] [i_14]))))));
    }
    var_28 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    var_29 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (((~(1903146453U))) | (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-16)), (var_6)))))))) - (max((min((625607010603169551LL), (8892791911473268903LL))), (((/* implicit */long long int) var_9))))));
    var_30 = ((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_13))))), (var_3))))));
}
