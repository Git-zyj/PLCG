/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211843
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (short i_2 = 4; i_2 < 11; i_2 += 2) 
            {
                arr_6 [i_0] = (((~(var_9))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))));
                /* LoopSeq 2 */
                for (short i_3 = 4; i_3 < 11; i_3 += 2) /* same iter space */
                {
                    var_18 -= ((/* implicit */_Bool) ((var_8) >> (((((/* implicit */int) (short)-10272)) + (10300)))));
                    arr_11 [i_0] [i_0] [i_2] [i_0] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17)))))) != (var_17)));
                }
                for (short i_4 = 4; i_4 < 11; i_4 += 2) /* same iter space */
                {
                    arr_14 [i_0] [i_0] [i_1] [i_2] [i_4 + 1] = ((/* implicit */short) -3969783541282262498LL);
                    var_19 = ((/* implicit */int) var_16);
                    var_20 = ((/* implicit */signed char) (unsigned short)29721);
                }
                var_21 = ((/* implicit */int) ((_Bool) 1649263557U));
                var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)12734))));
            }
            for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
            {
                var_23 = ((/* implicit */int) var_12);
                arr_19 [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) (short)-4190))));
            }
            for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
            {
                arr_22 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_10 [i_0] [i_0] [i_1] [i_1] [i_6])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -2040750365)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)35))) : (1557949933U)))) : (((-3969783541282262512LL) % (((/* implicit */long long int) 436719912))))));
                arr_23 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-42))) : ((+(var_12)))));
            }
            arr_24 [i_0] = (unsigned short)14;
            var_24 = ((/* implicit */unsigned short) ((18446744073709551615ULL) % (((/* implicit */unsigned long long int) 4201405929U))));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                for (unsigned int i_8 = 1; i_8 < 11; i_8 += 2) 
                {
                    {
                        arr_31 [i_0] [(signed char)7] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (short)32755)) >= (((/* implicit */int) (_Bool)1))))) % (((/* implicit */int) var_5))));
                        var_25 = ((/* implicit */unsigned int) arr_18 [i_0]);
                    }
                } 
            } 
        }
        arr_32 [i_0] [i_0] = arr_4 [i_0] [i_0];
    }
    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((int) 321259925))))) ? (var_4) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 93561367U)) ? (((/* implicit */long long int) -1413557354)) : (var_17)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 3) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned char) -1413557357);
        var_28 = ((/* implicit */unsigned short) -419960570560642253LL);
        arr_35 [i_9] [i_9] = ((/* implicit */unsigned int) arr_34 [i_9] [i_9]);
    }
    for (unsigned long long int i_10 = 0; i_10 < 18; i_10 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_11 = 3; i_11 < 17; i_11 += 3) 
        {
            for (signed char i_12 = 0; i_12 < 18; i_12 += 2) 
            {
                {
                    arr_46 [i_11] [i_11 + 1] [(signed char)9] [i_12] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) max(((short)31022), ((short)32753)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((var_12) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)136)))))) || ((!(((/* implicit */_Bool) -321259913)))))))));
                    var_29 = 0U;
                    arr_47 [i_10] [i_11] = ((/* implicit */unsigned int) (-(-1413557354)));
                    /* LoopSeq 1 */
                    for (int i_13 = 0; i_13 < 18; i_13 += 4) 
                    {
                        arr_51 [i_10] [i_11] [i_11] [i_13] = ((/* implicit */unsigned int) var_9);
                        arr_52 [i_13] [i_11] [i_11] [i_10] = ((((/* implicit */_Bool) (short)23162)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (signed char)87)));
                        arr_53 [i_11] = ((/* implicit */_Bool) (short)127);
                    }
                    var_30 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) ((((/* implicit */int) var_13)) % (22)))))));
                }
            } 
        } 
        arr_54 [i_10] [i_10] = ((/* implicit */int) ((((((/* implicit */_Bool) min((2737017363U), (((/* implicit */unsigned int) 1758498383))))) ? (((/* implicit */unsigned long long int) 1413557354)) : ((+(15117901941640678207ULL))))) >> (((var_7) + (4293170967055912424LL)))));
        arr_55 [(unsigned short)14] [i_10] = ((/* implicit */unsigned short) (~((-(((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))))));
        /* LoopNest 2 */
        for (unsigned int i_14 = 0; i_14 < 18; i_14 += 4) 
        {
            for (short i_15 = 0; i_15 < 18; i_15 += 3) 
            {
                {
                    var_31 -= ((/* implicit */unsigned int) min(((+(-766807231))), (((/* implicit */int) ((arr_57 [i_14] [i_15]) || (((/* implicit */_Bool) -455726669)))))));
                    var_32 = arr_39 [i_10];
                    arr_60 [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((0) <= (((/* implicit */int) ((unsigned short) 93561367U))))) ? (((((/* implicit */_Bool) (unsigned char)21)) ? (-8410101904054083267LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 458752)) ? (-458752) : (((/* implicit */int) (unsigned short)5482))))))) : (((((/* implicit */_Bool) (short)2659)) ? (((((/* implicit */long long int) 642497357U)) / (var_17))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65502)))))));
                    var_33 = ((/* implicit */unsigned short) max((((/* implicit */long long int) var_4)), (((((/* implicit */_Bool) (unsigned char)127)) ? (5348841833460299688LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37755)))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 12; i_16 += 3) 
    {
        for (short i_17 = 3; i_17 < 10; i_17 += 4) 
        {
            {
                var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */long long int) (-(3238398U)))) | (8992644318039227043LL))))));
                var_35 = ((/* implicit */signed char) (((~(((((/* implicit */_Bool) -463952252)) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) arr_26 [i_16] [i_16] [i_16])))))) >> (0)));
                arr_67 [i_16] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((arr_30 [i_16] [(_Bool)1]), (((/* implicit */unsigned int) (signed char)127))))))) ? (var_8) : (((/* implicit */unsigned int) max((min((-458750), (((/* implicit */int) arr_50 [i_16] [i_16] [i_17 - 3] [i_17 + 1] [i_17])))), (((/* implicit */int) (_Bool)1)))))));
                var_36 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) min((((/* implicit */int) var_0)), (-738333362)))), (((((/* implicit */_Bool) (unsigned char)91)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-27017))) : (1073741823U)))));
            }
        } 
    } 
    var_37 = ((/* implicit */short) var_12);
}
