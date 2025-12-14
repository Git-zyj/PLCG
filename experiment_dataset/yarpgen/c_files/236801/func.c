/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236801
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (16777215LL)))) | (((unsigned long long int) (-9223372036854775807LL - 1LL))))) >> ((((-(((/* implicit */int) arr_1 [i_0])))) + (11870))))))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_11 = ((unsigned short) (!(((/* implicit */_Bool) (unsigned char)85))));
            arr_5 [i_1] [(signed char)4] = ((/* implicit */long long int) (~((+(2032034259)))));
        }
    }
    for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        var_12 += ((/* implicit */_Bool) (+(((1193316588) & (((((/* implicit */_Bool) arr_7 [(signed char)8])) ? (((/* implicit */int) (signed char)38)) : (var_8)))))));
        /* LoopNest 3 */
        for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                for (unsigned int i_5 = 0; i_5 < 16; i_5 += 3) 
                {
                    {
                        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) arr_15 [i_2] [i_2] [(signed char)6] [i_4] [i_5] [i_5]))));
                        var_14 = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) (unsigned short)43819))))) & (((((long long int) var_5)) << (((((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */long long int) var_8)))) + (4560785351371559559LL)))))));
                        arr_16 [i_2] [(short)6] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_7)), (((unsigned long long int) max((var_9), (((/* implicit */long long int) (signed char)-1)))))));
                        arr_17 [i_2] [14LL] [i_2] [(_Bool)1] [i_5] = ((/* implicit */unsigned short) min((arr_11 [3] [i_4] [i_5]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_4] [i_5])) && ((!(((/* implicit */_Bool) (signed char)115)))))))));
                        var_15 = ((/* implicit */int) (-(min((((/* implicit */unsigned int) (signed char)110)), (((((/* implicit */_Bool) (unsigned short)40857)) ? (((/* implicit */unsigned int) var_5)) : (var_7)))))));
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */long long int) max((var_16), (((((((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-3))))) / (((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))) / (min((max((var_9), (var_1))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)14623)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)42294)))))))))));
    /* LoopSeq 2 */
    for (signed char i_6 = 3; i_6 < 20; i_6 += 3) /* same iter space */
    {
        var_17 -= ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_21 [i_6])) || (((/* implicit */_Bool) var_5)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_6])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)24677)) : (((/* implicit */int) (unsigned char)236)))) : (((/* implicit */int) ((13267437510155170046ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [(unsigned short)12]))) >= (9223372036854775807LL))))) * (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)24676))) / (var_7))))));
        var_18 = ((/* implicit */_Bool) max((var_18), (((((/* implicit */int) ((var_6) < (((/* implicit */long long int) ((/* implicit */int) arr_19 [(_Bool)1])))))) != (((/* implicit */int) max(((unsigned short)13431), (arr_19 [(unsigned short)6]))))))));
    }
    for (signed char i_7 = 3; i_7 < 20; i_7 += 3) /* same iter space */
    {
        var_19 = ((((/* implicit */_Bool) ((((var_1) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)29888)) / (1193316581))))))) ? (((((var_1) / (((/* implicit */long long int) var_8)))) / (((/* implicit */long long int) (+(var_2)))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) var_8)), (var_7)))));
        /* LoopSeq 2 */
        for (long long int i_8 = 4; i_8 < 19; i_8 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 274877906432LL)))))));
            arr_27 [i_7 - 3] [i_8] = ((/* implicit */unsigned char) var_6);
            /* LoopSeq 2 */
            for (signed char i_9 = 2; i_9 < 19; i_9 += 3) 
            {
                arr_31 [i_7] [i_8 - 3] [(unsigned short)17] [i_8] = ((/* implicit */_Bool) var_6);
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_7 - 1] [i_7 - 1] [i_9] [21ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)6))) : (arr_21 [3ULL])))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) var_5)) : (var_7))) : (((/* implicit */unsigned int) ((int) arr_26 [i_7 - 1] [i_8])))))), (((((/* implicit */_Bool) arr_30 [i_8 - 1] [(unsigned short)20])) ? (arr_24 [i_7 - 1] [i_7 - 1]) : (arr_24 [i_8] [i_7]))))))));
            }
            for (int i_10 = 1; i_10 < 21; i_10 += 2) 
            {
                var_22 = ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_7] [i_8] [i_10 + 1]))));
                var_23 = ((/* implicit */unsigned short) var_6);
            }
            arr_35 [i_8] [i_8 - 1] [i_8 + 3] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-2)) ? (((arr_32 [i_7] [5U] [i_8 - 3]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [(unsigned char)8] [19ULL] [i_8] [1]))))) : (min((((/* implicit */unsigned int) var_5)), (var_2)))))), (((-3601020300397169857LL) % (arr_22 [i_8 - 2] [i_7 - 1])))));
            arr_36 [i_8] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-87)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76))) : (((3221225472U) * (134217726U)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)53063))))))) : ((+(max((((/* implicit */long long int) var_2)), (arr_24 [i_7] [i_8 - 4]))))));
        }
        for (long long int i_11 = 4; i_11 < 19; i_11 += 3) /* same iter space */
        {
            arr_40 [i_11] [i_7 + 2] [(unsigned short)10] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_2)) ? (var_2) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [10U] [10U])))))) ? (((/* implicit */int) arr_18 [(unsigned short)12] [i_7 + 2])) : (((/* implicit */int) var_3))));
            arr_41 [4LL] [i_7] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((arr_26 [i_7] [i_11]) ? (2323817756191843680LL) : (((/* implicit */long long int) -847158332)))))), (((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-113)))))));
            /* LoopNest 2 */
            for (short i_12 = 0; i_12 < 22; i_12 += 2) 
            {
                for (unsigned long long int i_13 = 1; i_13 < 20; i_13 += 3) 
                {
                    {
                        arr_46 [i_7] = ((/* implicit */unsigned short) ((int) (~(arr_45 [i_7 - 2] [i_7 - 2] [12LL] [(_Bool)1]))));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_0))));
                    }
                } 
            } 
        }
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)16542)) ? (((((/* implicit */_Bool) (unsigned short)57324)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)44))) : (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16)))))))));
        arr_47 [i_7 - 2] = ((/* implicit */unsigned int) arr_23 [2U]);
        var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (~(((long long int) (_Bool)1)))))));
    }
    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((unsigned short)3072), (((/* implicit */unsigned short) (_Bool)1))))) ? (min((var_1), (((/* implicit */long long int) (unsigned short)6646)))) : (min((var_1), (var_1)))));
    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-6)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_3))))) : (min((5204477512951880664LL), (((/* implicit */long long int) var_3)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_2))) ? (((/* implicit */int) ((unsigned char) (unsigned short)8176))) : (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_5))))))))));
}
