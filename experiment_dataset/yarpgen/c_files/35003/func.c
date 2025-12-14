/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35003
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
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) 1017745020))));
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (((+(((/* implicit */int) var_3)))) < (((/* implicit */int) (unsigned short)22669)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) (!(arr_3 [i_1]))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */_Bool) (((~(1445064087U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_0] [i_0])) > (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2]))))))));
                        var_18 = ((/* implicit */int) arr_3 [i_3]);
                        /* LoopSeq 2 */
                        for (signed char i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-1))) ^ (((4971710787599240030LL) >> (((/* implicit */int) (_Bool)1))))));
                            arr_11 [i_3] [(unsigned char)10] [i_2] [i_0 + 2] [i_3] = (+(((/* implicit */int) arr_3 [i_0 - 1])));
                            arr_12 [i_0] [i_1] [i_4] [i_3] [i_4 - 1] [i_4] [i_3] = ((/* implicit */signed char) arr_2 [i_4 + 2]);
                        }
                        for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)28781)) ? (6133301999005202114ULL) : (((/* implicit */unsigned long long int) -5307209713730037656LL)))) / (((/* implicit */unsigned long long int) arr_1 [i_0 + 1]))));
                            var_21 = ((/* implicit */_Bool) ((unsigned int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0 + 2] [i_5]));
                            var_22 = ((/* implicit */long long int) arr_10 [i_2] [i_2] [i_3] [i_2] [i_2] [i_2] [i_2]);
                            var_23 += ((/* implicit */int) (unsigned char)108);
                        }
                        /* LoopSeq 1 */
                        for (int i_6 = 2; i_6 < 20; i_6 += 2) 
                        {
                            arr_18 [i_3] [i_1] [19U] [i_3] [i_6] = ((/* implicit */unsigned long long int) (~(3168071148U)));
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (-(((/* implicit */int) var_13)))))));
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (+(((/* implicit */int) arr_16 [(signed char)16] [i_0 + 1] [(signed char)5] [i_6 - 2] [i_6 + 1] [i_6 - 2])))))));
                        }
                    }
                    for (short i_7 = 1; i_7 < 18; i_7 += 2) 
                    {
                        arr_21 [17] [9LL] [i_2] [i_7] [i_7 + 3] = ((/* implicit */short) 1259048486);
                        var_26 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-35))));
                    }
                }
            } 
        } 
        var_27 -= ((/* implicit */signed char) ((((1647975066742412264LL) >> (((/* implicit */int) arr_3 [i_0])))) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))));
        arr_22 [i_0] [i_0] = ((/* implicit */long long int) (unsigned char)90);
        var_28 = ((/* implicit */int) arr_6 [i_0] [i_0] [i_0]);
        arr_23 [(short)14] = ((/* implicit */int) (unsigned char)29);
    }
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        var_29 = ((/* implicit */unsigned char) min(((short)11), ((short)11)));
        arr_27 [(unsigned char)11] [i_8] = ((/* implicit */unsigned int) ((short) (short)-16));
    }
    for (short i_9 = 0; i_9 < 19; i_9 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_10 = 2; i_10 < 18; i_10 += 3) 
        {
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((0ULL) <= (((/* implicit */unsigned long long int) -852388972)))))))) >= (max((arr_9 [(short)14] [i_10] [10] [i_10 - 2] [i_10] [i_10 - 2]), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)11)), (var_12))))))));
            var_31 = ((/* implicit */signed char) max((var_31), (arr_6 [i_9] [i_10] [i_10 - 1])));
            arr_33 [11] [11] = ((/* implicit */int) max((((/* implicit */unsigned int) max((arr_15 [i_10 + 1] [i_10 - 1] [i_10 + 1] [i_10] [i_10 - 1] [i_10] [5ULL]), (((/* implicit */unsigned char) var_13))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (min((((/* implicit */unsigned int) (short)9)), (546117934U)))))));
            /* LoopNest 3 */
            for (unsigned int i_11 = 0; i_11 < 19; i_11 += 2) 
            {
                for (int i_12 = 1; i_12 < 16; i_12 += 2) 
                {
                    for (long long int i_13 = 0; i_13 < 19; i_13 += 1) 
                    {
                        {
                            arr_42 [i_13] [i_12] [i_11] [i_10 - 2] [i_9] = ((arr_40 [i_13] [i_12 + 1] [i_11] [i_10 + 1] [i_9]) && (((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)12)) ? (((/* implicit */int) (short)25372)) : (((/* implicit */int) arr_14 [i_11] [i_12])))), (((/* implicit */int) (short)12))))));
                            var_32 &= ((/* implicit */signed char) max((((((/* implicit */int) arr_6 [i_10 - 2] [i_10] [i_11])) & (((/* implicit */int) arr_38 [i_10 + 1] [i_10 + 1] [i_11] [i_12 + 2] [(signed char)12] [i_10])))), (arr_37 [i_10 - 1] [i_10 + 1] [i_12] [i_12 + 1])));
                            arr_43 [i_12] [i_10] [i_12] [(unsigned char)12] [i_13] [15LL] = ((((/* implicit */_Bool) ((((-1129636105) <= (((/* implicit */int) (short)11)))) ? (((1896073432U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-5))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_9] [i_10] [16U] [i_12] [(signed char)9] [i_13])) >= (((/* implicit */int) arr_40 [(signed char)13] [i_10] [i_11] [i_10] [17]))))))))) && ((!(((/* implicit */_Bool) ((signed char) (short)11))))));
                        }
                    } 
                } 
            } 
            arr_44 [(signed char)10] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (+(arr_17 [i_9] [(unsigned char)5] [i_10] [i_9] [i_10 - 2] [i_9] [i_10])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-40))) : (((((/* implicit */_Bool) arr_35 [i_10] [i_10] [4ULL] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2092))) : (3238967844407562283LL)))))));
        }
        var_33 += ((((/* implicit */_Bool) (short)-11)) ? (((/* implicit */int) max(((short)-22), (arr_13 [i_9] [i_9] [(_Bool)1] [i_9] [i_9] [i_9] [i_9])))) : (((int) max((891649551181656538LL), (((/* implicit */long long int) var_0))))));
        arr_45 [18LL] = ((/* implicit */short) max((arr_17 [17] [i_9] [i_9] [i_9] [i_9] [3U] [i_9]), (((((/* implicit */int) arr_40 [i_9] [i_9] [i_9] [i_9] [i_9])) ^ (((/* implicit */int) max((var_8), (((/* implicit */short) arr_6 [i_9] [15] [i_9])))))))));
    }
}
