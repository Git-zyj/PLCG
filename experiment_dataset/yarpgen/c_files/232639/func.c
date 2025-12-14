/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232639
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            {
                var_11 |= ((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_1 - 2]))))), (max((((/* implicit */long long int) arr_4 [i_1])), (arr_5 [i_0] [i_0])))))));
                arr_6 [i_1] [i_1] |= ((/* implicit */unsigned long long int) (~((+(((((/* implicit */int) arr_3 [(unsigned short)13] [(short)18])) - (((/* implicit */int) arr_2 [i_1] [i_1]))))))));
                arr_7 [i_1] |= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(signed char)7] [i_1 - 1]))) : (arr_1 [i_0])))));
            }
        } 
    } 
    var_12 |= (_Bool)1;
    var_13 |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-16))))) ? (((long long int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)219)), (var_2)))) & (((/* implicit */int) var_4)))))));
    var_14 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) & (((/* implicit */int) ((short) ((5376113125148458889LL) | (((/* implicit */long long int) ((/* implicit */int) var_10)))))))));
    /* LoopSeq 1 */
    for (unsigned int i_2 = 3; i_2 < 18; i_2 += 2) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */signed char) arr_1 [i_2 - 3]);
        /* LoopSeq 3 */
        for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    {
                        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) max(((~(((/* implicit */int) arr_4 [i_3])))), ((-((-(((/* implicit */int) (signed char)15)))))))))));
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) ((unsigned int) arr_11 [i_3] [i_3])))) ? (((((/* implicit */_Bool) arr_16 [i_2] [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_2 [i_4] [i_4])))))) : (((var_6) - (-5140269853188427048LL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-98))) : (-5819447483787896146LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)65535)))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) / (-5376113125148458890LL))))))))));
                    }
                } 
            } 
            arr_22 [i_2 - 3] [i_2] = ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) arr_14 [i_2])), (((unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-15))))) ? (((/* implicit */int) (signed char)5)) : ((-(((/* implicit */int) var_8)))))))));
            var_17 |= ((/* implicit */unsigned long long int) (((-(arr_5 [i_2] [i_2]))) / (((/* implicit */long long int) ((/* implicit */int) ((short) (-(((/* implicit */int) (unsigned char)219)))))))));
            arr_23 [i_2] [i_2] = ((/* implicit */short) 1801572825865668794LL);
            var_18 |= arr_15 [i_3] [1] [1];
        }
        for (short i_6 = 4; i_6 < 18; i_6 += 1) /* same iter space */
        {
            var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_10 [(_Bool)1] [(_Bool)1])), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_1 [i_6])))))) ? (arr_24 [(_Bool)1]) : (((/* implicit */long long int) ((((/* implicit */int) max((arr_17 [18]), ((short)32767)))) >> (((arr_24 [18LL]) + (6935841750602221844LL))))))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 1; i_7 < 16; i_7 += 2) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_20 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_7 - 1])) ? (arr_16 [i_2] [i_2] [i_7 - 1]) : (((/* implicit */int) (unsigned char)0))))), (max((arr_24 [i_2]), (((/* implicit */long long int) 1064511572))))));
                        arr_32 [i_2] [i_2] [i_2] [(_Bool)1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((1072693248LL), (((/* implicit */long long int) arr_21 [i_8] [i_8] [i_8])))))))) + (((/* implicit */int) ((4294967295U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_7] [i_7] [i_7] [i_7 + 3]))))))));
                    }
                } 
            } 
        }
        for (short i_9 = 4; i_9 < 18; i_9 += 1) /* same iter space */
        {
            arr_37 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) arr_15 [i_2] [12ULL] [12ULL]);
            var_21 = -5376113125148458890LL;
            /* LoopNest 3 */
            for (long long int i_10 = 0; i_10 < 19; i_10 += 2) 
            {
                for (long long int i_11 = 0; i_11 < 19; i_11 += 1) 
                {
                    for (long long int i_12 = 0; i_12 < 19; i_12 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_18 [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-32758)))))));
                            arr_46 [i_12] [i_2] [i_2] [i_2] [(unsigned char)2] [i_2] = ((/* implicit */unsigned char) (((+(var_5))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_2]))))))));
                        }
                    } 
                } 
            } 
            var_23 += ((/* implicit */long long int) max((((arr_15 [(unsigned short)15] [(unsigned short)15] [i_9]) / (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [4U] [i_9]), ((signed char)1))))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65535)) >> ((((+(((/* implicit */int) (short)32767)))) - (32764))))))));
            var_24 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_38 [i_9] [i_2] [(short)18]))) ? (((((/* implicit */_Bool) arr_28 [i_2] [i_2] [i_9 - 3] [i_9 - 3])) ? (arr_15 [i_2 - 1] [i_2 - 1] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)20608))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_2] [i_2] [i_2 - 2] [i_9 - 2]))))))));
        }
    }
}
