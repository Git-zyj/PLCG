/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28073
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_17 = ((((/* implicit */_Bool) max((0U), (((/* implicit */unsigned int) (short)-30841))))) ? (((((/* implicit */_Bool) 119226897817622000ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-30862))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))));
                        var_18 += ((/* implicit */_Bool) 791041518U);
                        var_19 = ((/* implicit */unsigned int) max((var_19), ((-(((((/* implicit */_Bool) (+(((/* implicit */int) (short)-27604))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26699))) : (max((((/* implicit */unsigned int) var_5)), (var_7)))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned short) var_6);
            var_21 += arr_13 [i_4] [i_0];
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                var_22 += ((/* implicit */signed char) min((-1326879615), (((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (arr_15 [i_0] [i_0] [i_0]))))));
                var_23 = ((/* implicit */unsigned short) (short)-27604);
                /* LoopSeq 3 */
                for (short i_6 = 0; i_6 < 18; i_6 += 1) 
                {
                    var_24 |= ((/* implicit */short) ((min((((/* implicit */int) (unsigned short)38837)), ((-(((/* implicit */int) arr_2 [i_5])))))) + (((/* implicit */int) var_6))));
                    var_25 ^= ((/* implicit */unsigned short) ((long long int) max(((short)0), ((short)27591))));
                }
                for (signed char i_7 = 0; i_7 < 18; i_7 += 2) 
                {
                    var_26 = ((/* implicit */signed char) min(((short)-6), (((/* implicit */short) (_Bool)0))));
                    arr_22 [i_7] [i_0] &= (+(((/* implicit */int) var_8)));
                    var_27 += ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) || (arr_11 [i_7])))), (min((arr_7 [i_7] [i_7]), (((/* implicit */unsigned int) (_Bool)1))))));
                }
                /* vectorizable */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_28 = ((/* implicit */_Bool) ((int) (unsigned char)244));
                    var_29 += ((/* implicit */unsigned char) var_10);
                    var_30 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) * (14634050418076725650ULL)));
                    var_31 = ((/* implicit */unsigned int) ((signed char) (short)-18949));
                }
            }
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
        {
            var_32 = ((/* implicit */signed char) 1326879630);
            var_33 = ((/* implicit */unsigned long long int) 4211274114U);
            arr_27 [i_0] [(_Bool)1] [(_Bool)1] |= ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | ((+((-(1006632960U))))));
        }
        arr_28 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_0] [i_0])) + (((/* implicit */int) (short)-6))))));
        arr_29 [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((short) 4084778347U)))));
    }
    for (short i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (signed char i_11 = 2; i_11 < 16; i_11 += 1) 
        {
            var_34 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_11 + 1])) ? (-220670697) : (((/* implicit */int) arr_17 [i_11 - 2])))));
            arr_34 [i_10] [i_11] = ((/* implicit */signed char) min((((((/* implicit */int) (short)-24902)) % (((/* implicit */int) var_12)))), (((/* implicit */int) ((unsigned short) min((261120ULL), (((/* implicit */unsigned long long int) var_4))))))));
            arr_35 [i_10] [i_11] = ((/* implicit */_Bool) min((0), ((+(((/* implicit */int) (unsigned char)112))))));
            var_35 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_2 [i_11 + 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_11 + 1]))))));
        }
        for (unsigned short i_12 = 0; i_12 < 18; i_12 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_13 = 0; i_13 < 18; i_13 += 1) 
            {
                arr_41 [i_10] [i_10] [i_13] = ((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) 4294967291U)), (var_2)))));
                var_36 -= ((/* implicit */unsigned int) ((unsigned char) min((((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_13)))), (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))));
                arr_42 [i_10] [i_10] = ((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) -1))))), (var_12)));
                var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)26699)) ? (((unsigned int) (~(3812693655632825981ULL)))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_11)))))));
            }
            arr_43 [i_10] [i_10] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned short)49116)) ? (-220670699) : (((/* implicit */int) (signed char)49))))));
            arr_44 [i_10] [i_12] [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_10] [i_10])) >= (((/* implicit */int) arr_19 [i_10] [i_10] [i_12] [i_12] [i_12]))))), (max((((/* implicit */unsigned int) var_1)), (arr_26 [i_10] [i_12]))))))));
        }
        /* vectorizable */
        for (unsigned char i_14 = 0; i_14 < 18; i_14 += 4) 
        {
            var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_10])) ? (((/* implicit */int) (signed char)127)) : ((-(((/* implicit */int) (unsigned short)3749)))))))));
            var_39 = ((/* implicit */short) (unsigned short)58455);
            var_40 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_37 [i_10]))));
            var_41 *= ((/* implicit */signed char) arr_2 [i_14]);
        }
        for (signed char i_15 = 0; i_15 < 18; i_15 += 1) 
        {
            var_42 = (!(((/* implicit */_Bool) ((857146351U) % (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned short)43894))))))));
            var_43 = ((/* implicit */unsigned short) ((unsigned int) ((signed char) ((arr_48 [i_15] [i_10]) ? (4294967293U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
            var_44 = ((/* implicit */unsigned long long int) (-(min((var_1), (((/* implicit */int) max(((signed char)-54), (var_8))))))));
            var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) ((unsigned long long int) 0ULL)))));
        }
        arr_52 [i_10] = ((/* implicit */unsigned short) (_Bool)1);
    }
    for (short i_16 = 0; i_16 < 18; i_16 += 3) /* same iter space */
    {
        var_46 -= ((/* implicit */short) ((signed char) (-(((/* implicit */int) (_Bool)1)))));
        var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) max(((~(((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_0 [i_16] [i_16])))))), (((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_36 [i_16])))))))));
        arr_55 [i_16] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) max((var_7), (3636082152U)))))));
    }
    var_48 = ((/* implicit */short) var_11);
}
