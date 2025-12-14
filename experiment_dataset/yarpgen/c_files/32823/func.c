/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32823
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
    var_12 |= ((/* implicit */signed char) ((((((/* implicit */int) var_1)) + (2147483647))) >> (((7604312410246316897LL) - (7604312410246316894LL)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) (-((((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0])), (var_7)))) : ((+(var_0)))))));
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-2903)) : (((/* implicit */int) arr_1 [i_0]))));
    }
    /* LoopSeq 4 */
    for (int i_1 = 0; i_1 < 13; i_1 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 12; i_2 += 1) 
        {
            for (int i_3 = 4; i_3 < 11; i_3 += 3) 
            {
                {
                    var_15 = max((arr_4 [i_2 - 1] [i_3 - 4]), (((arr_4 [i_2 - 1] [i_3 - 4]) + (((/* implicit */unsigned long long int) var_9)))));
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_2 + 1]))))))))));
                    var_17 = ((unsigned short) ((arr_4 [i_2 - 1] [i_2 - 1]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2 - 1] [i_2] [i_3 + 1])))));
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_4 [i_3 - 4] [i_2 - 1])))) ? (((((/* implicit */_Bool) arr_5 [i_3 - 4] [i_2] [i_2 - 1])) ? (arr_4 [i_3 - 3] [i_3 - 3]) : (arr_4 [i_3 + 1] [i_3 + 1]))) : (((/* implicit */unsigned long long int) 3092217880U))));
                    var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((unsigned long long int) (short)6314)) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 + 1])))))) ? ((-(-5685957666301131307LL))) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) : (var_11)))))));
                }
            } 
        } 
        arr_9 [i_1] [i_1] = max((arr_3 [i_1]), (max((((/* implicit */unsigned int) (short)5707)), (arr_3 [i_1]))));
    }
    for (int i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            var_20 -= ((/* implicit */unsigned int) -275365270);
            var_21 *= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (var_6)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)67))))) : (((((/* implicit */_Bool) arr_5 [i_4] [i_4] [i_4])) ? (min((var_6), (arr_4 [i_5] [i_4]))) : (((/* implicit */unsigned long long int) max((arr_2 [i_4]), (((/* implicit */long long int) (signed char)-105)))))))));
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 13; i_7 += 3) 
                {
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        {
                            arr_22 [i_4] [i_4] [i_4] [i_4] [i_5] = ((/* implicit */signed char) var_11);
                            arr_23 [i_8] [i_5] [i_6] [i_6] [i_5] [i_5] [i_4] = ((/* implicit */unsigned short) (-(((unsigned int) (-2147483647 - 1)))));
                            arr_24 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) min((70368744177663ULL), (((/* implicit */unsigned long long int) (short)10797)))))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (2113929216U) : (2486917835U))) : (arr_17 [i_4] [i_4] [i_4] [i_4] [i_4])));
                            arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_8] [i_4] &= ((/* implicit */signed char) var_0);
                        }
                    } 
                } 
            } 
            arr_26 [i_5] = ((((/* implicit */int) ((unsigned short) ((int) (unsigned short)55638)))) | (((/* implicit */int) ((signed char) (+(3291332934U))))));
            arr_27 [i_5] [i_5] = ((/* implicit */unsigned char) var_0);
        }
        arr_28 [i_4] [i_4] = ((/* implicit */int) ((min((arr_4 [i_4] [i_4]), (((/* implicit */unsigned long long int) var_10)))) < (max((var_6), (arr_4 [i_4] [i_4])))));
    }
    for (int i_9 = 0; i_9 < 13; i_9 += 4) /* same iter space */
    {
        arr_31 [i_9] [i_9] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */long long int) arr_21 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) | (arr_12 [i_9])))) ? (((/* implicit */unsigned long long int) 2113929216U)) : (((unsigned long long int) (unsigned char)255)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_12 [i_9]) : (((/* implicit */long long int) ((unsigned int) 124U))))))));
        var_22 = ((/* implicit */signed char) arr_8 [i_9] [i_9] [i_9]);
    }
    for (int i_10 = 0; i_10 < 13; i_10 += 4) /* same iter space */
    {
        arr_35 [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) (signed char)-55))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) >= (var_11)))) : (((/* implicit */int) ((11045856442239828219ULL) > (((/* implicit */unsigned long long int) var_9)))))))) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), ((short)-8)))), (min((((/* implicit */unsigned long long int) arr_2 [i_10])), (11045856442239828219ULL))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16))) / (72055395014672384LL))) / (((((/* implicit */_Bool) arr_5 [i_10] [i_10] [i_10])) ? (arr_12 [i_10]) : (((/* implicit */long long int) 275365268)))))))));
        /* LoopNest 3 */
        for (unsigned char i_11 = 0; i_11 < 13; i_11 += 2) 
        {
            for (unsigned short i_12 = 1; i_12 < 12; i_12 += 3) 
            {
                for (unsigned short i_13 = 0; i_13 < 13; i_13 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_11] [i_12 + 1] [i_11] [i_11] [i_10] [i_10])) ? (((/* implicit */int) ((unsigned short) (signed char)-36))) : (((/* implicit */int) arr_6 [i_12 + 1]))))) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-66))) % (arr_4 [i_11] [i_11]))))) : (((/* implicit */unsigned long long int) ((((var_3) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)20))))) ? (((/* implicit */int) arr_36 [i_12 + 1])) : (((/* implicit */int) arr_40 [i_12] [i_12 + 1] [i_12 + 1] [i_12 + 1] [i_12 + 1])))))));
                        var_24 = ((/* implicit */unsigned long long int) (+(min((-72055395014672399LL), (((/* implicit */long long int) arr_32 [i_10] [i_10]))))));
                    }
                } 
            } 
        } 
        arr_43 [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_42 [i_10] [i_10] [i_10] [i_10])))) | ((~(arr_42 [i_10] [i_10] [i_10] [i_10])))));
        arr_44 [i_10] [i_10] = ((/* implicit */int) arr_18 [i_10]);
    }
}
