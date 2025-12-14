/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21
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
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        var_17 = ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0 - 1]))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_0)))))));
        var_18 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned int) ((int) (_Bool)1)))), (((((/* implicit */long long int) ((arr_1 [i_0 + 1]) >> (((/* implicit */int) (_Bool)0))))) ^ (max((((/* implicit */long long int) var_0)), (arr_2 [i_0])))))));
        arr_4 [i_0 - 1] [i_0] = ((/* implicit */short) ((unsigned char) var_6));
        var_19 ^= ((/* implicit */_Bool) ((((/* implicit */int) min((min(((short)32767), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) (!(arr_0 [i_0]))))))) & (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) var_16))))))));
        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) 9473874873364982264ULL))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_9 [(signed char)14] [i_1] = ((((/* implicit */_Bool) var_12)) ? (max((((/* implicit */unsigned int) (-(var_6)))), (((var_5) + (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1])))))));
        var_21 ^= ((/* implicit */long long int) (-((((!(((/* implicit */_Bool) var_16)))) ? (((/* implicit */int) ((unsigned char) arr_7 [i_1] [i_1]))) : ((-(var_9)))))));
        var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) (_Bool)0))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_1 [i_1]) : (var_13)))))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))) ? (arr_7 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_11) > (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))))));
    }
    var_23 = ((/* implicit */short) ((((/* implicit */int) var_10)) >> (((var_9) - (936440214)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_2 = 4; i_2 < 20; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 1; i_3 < 18; i_3 += 3) 
        {
            var_24 = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)-5339)) : (((/* implicit */int) (unsigned char)255))));
            var_25 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
            var_26 = ((/* implicit */unsigned long long int) arr_1 [i_2]);
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -625403420)) ? ((-(((/* implicit */int) (short)15)))) : (-164799283)));
        }
        var_28 ^= ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-897)) + (2147483647))) << (((((((/* implicit */_Bool) arr_14 [(signed char)0] [i_2])) ? (var_1) : (arr_12 [(unsigned short)4]))) - (301607720)))));
        arr_16 [i_2] = ((/* implicit */signed char) ((arr_1 [i_2 + 1]) >> (((arr_1 [i_2 - 3]) - (3583266831U)))));
        var_29 = ((/* implicit */unsigned int) var_1);
        var_30 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)4))));
    }
    for (short i_4 = 4; i_4 < 20; i_4 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) 
        {
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                {
                    arr_26 [i_4 + 2] [i_5] [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((var_13) % (((/* implicit */unsigned int) arr_19 [i_4 - 1] [i_4 - 1]))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)46809))))) * (((((/* implicit */_Bool) (signed char)12)) ? (197546410777692472ULL) : (((/* implicit */unsigned long long int) 134209536LL)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) -2056787446)) - (arr_2 [i_5]))))))))));
                    var_31 += var_3;
                    arr_27 [i_4] [(unsigned short)2] [i_4] [i_4] = ((/* implicit */short) var_2);
                    var_32 &= (-((-(((/* implicit */int) (signed char)-24)))));
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_16)) % (var_6)))));
        arr_28 [i_4] [i_4 - 2] &= ((/* implicit */short) arr_12 [(_Bool)1]);
        var_34 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_22 [i_4 - 1])) ? (arr_22 [i_4 - 3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (_Bool)0)))))))));
    }
    for (int i_7 = 4; i_7 < 20; i_7 += 2) 
    {
        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-55)) : (((/* implicit */int) var_16)))), (((/* implicit */int) (short)0))))) ? (arr_22 [i_7]) : (((((/* implicit */long long int) arr_20 [i_7] [i_7 + 2] [i_7])) - ((+(8228682733467440531LL)))))));
        var_36 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) arr_32 [i_7 - 2]))))));
        var_37 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (~(((4014114727U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) | (((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_7 - 1])))))));
        /* LoopSeq 2 */
        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
        {
            arr_37 [i_8] [(signed char)16] [i_7] = ((/* implicit */signed char) var_9);
            var_38 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)206)), ((short)-5339)))) : (((/* implicit */int) min(((unsigned char)1), ((unsigned char)0)))))) <= (min((((/* implicit */int) ((unsigned short) 443380791))), (((var_6) << (((var_9) - (936440233)))))))));
            /* LoopNest 3 */
            for (unsigned int i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                for (unsigned char i_10 = 1; i_10 < 20; i_10 += 3) 
                {
                    for (unsigned long long int i_11 = 1; i_11 < 20; i_11 += 3) 
                    {
                        {
                            arr_49 [i_11] [i_11] [i_9] [i_11] [i_11] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_7])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_6)) > (var_14)))))) < (((/* implicit */int) (signed char)56))));
                            var_39 = ((/* implicit */short) (-((+(arr_43 [i_8 + 1] [i_9] [i_10] [i_10 + 2])))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
        {
            var_40 = ((/* implicit */short) 8228682733467440532LL);
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (short i_14 = 1; i_14 < 19; i_14 += 2) 
                {
                    {
                        arr_57 [i_13] [i_12] [i_12] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_7] [i_12 + 1] [i_13])) >> (((((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_7 - 4])) / (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8228682733467440532LL)))))) : (((((/* implicit */_Bool) var_2)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))) - (10651126700300621701ULL)))));
                        var_41 += ((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) max((((/* implicit */int) var_3)), (-643453247))))) + (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            arr_58 [i_7] [(signed char)16] = ((/* implicit */short) arr_35 [i_7] [i_12]);
            var_42 -= ((/* implicit */short) arr_31 [(_Bool)1] [(_Bool)1]);
        }
    }
    var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)32768)) : (((/* implicit */int) (_Bool)1))))) ? (0ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)12549))));
}
