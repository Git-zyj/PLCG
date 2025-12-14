/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216638
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
    var_19 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_20 = ((/* implicit */long long int) (-(((/* implicit */int) var_4))));
        arr_3 [6U] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1))));
        var_21 = ((/* implicit */short) ((signed char) arr_0 [i_0]));
        var_22 = ((/* implicit */_Bool) (+(var_10)));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) (_Bool)0);
        /* LoopSeq 3 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_23 ^= ((/* implicit */unsigned int) ((short) min(((!(((/* implicit */_Bool) 470400308939893727LL)))), ((!((_Bool)1))))));
            var_24 = ((/* implicit */unsigned short) (!(((_Bool) arr_6 [i_2]))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            arr_26 [i_3] = ((/* implicit */unsigned long long int) (-((~(((((/* implicit */_Bool) var_2)) ? (arr_11 [i_4] [i_6]) : (((/* implicit */int) (unsigned char)103))))))));
                            var_25 = ((/* implicit */short) ((unsigned char) min((min((var_5), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) min((((/* implicit */int) (short)-3587)), (arr_11 [i_1] [(signed char)7])))))));
                        }
                        for (long long int i_7 = 1; i_7 < 9; i_7 += 1) 
                        {
                            arr_31 [i_1] [i_5] [(unsigned char)4] [i_3] [i_1] |= ((/* implicit */unsigned int) 732714642568475338ULL);
                            var_26 &= ((/* implicit */short) (~((+(((/* implicit */int) (short)-4083))))));
                            var_27 = ((/* implicit */unsigned long long int) (+((-(-5381564281531776671LL)))));
                        }
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_17)) ? (1260940240U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (signed char i_9 = 1; i_9 < 9; i_9 += 1) 
                {
                    {
                        arr_37 [i_1] |= ((/* implicit */long long int) arr_16 [i_9] [i_3] [i_1]);
                        var_29 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)5)))))) * (((unsigned int) (short)32767)))));
                        var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)23505)))))));
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned char) ((((var_14) ? ((~(((/* implicit */int) arr_33 [i_1] [i_3] [i_3])))) : (arr_7 [i_1]))) > (((/* implicit */int) (!(((/* implicit */_Bool) (+(-5381564281531776671LL)))))))));
            var_32 = ((/* implicit */unsigned int) var_1);
        }
        for (short i_10 = 2; i_10 < 10; i_10 += 1) 
        {
            var_33 ^= ((/* implicit */long long int) (~(((/* implicit */int) (short)4082))));
            /* LoopNest 2 */
            for (short i_11 = 1; i_11 < 9; i_11 += 1) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_34 = ((/* implicit */unsigned long long int) arr_28 [i_10] [i_12]);
                        /* LoopSeq 3 */
                        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                        {
                            var_35 = ((/* implicit */signed char) ((8052413866493351875ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) arr_16 [i_1] [i_10] [i_1]))));
                            var_37 = ((/* implicit */short) var_3);
                        }
                        for (unsigned int i_14 = 2; i_14 < 10; i_14 += 1) 
                        {
                            arr_50 [i_12] [i_11] [i_11 + 2] [i_11] [i_11 + 2] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -908714838674178524LL))))) / (((/* implicit */int) (unsigned char)17))))), (8164612408566913584ULL)));
                            var_38 ^= ((/* implicit */int) max((732714642568475346ULL), (((/* implicit */unsigned long long int) (unsigned char)238))));
                        }
                        for (signed char i_15 = 0; i_15 < 11; i_15 += 1) 
                        {
                            arr_55 [i_12] = ((/* implicit */int) var_3);
                            var_39 = ((/* implicit */unsigned char) max((15777538317104289815ULL), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_53 [i_15] [i_12] [i_12] [i_11] [i_10] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (258542993) : (((/* implicit */int) (_Bool)1)))))))));
                            var_40 = ((/* implicit */unsigned long long int) (short)(-32767 - 1));
                        }
                        var_41 ^= ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (3562322524838708870LL)))) ? (max((((/* implicit */int) (unsigned char)186)), (arr_40 [i_1] [i_10]))) : (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) (_Bool)1)))))))), (-3382027172292919562LL)));
                        arr_56 [i_12] [i_12] [i_12] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (short)32767)), (8871323891885812392ULL)));
                        /* LoopSeq 4 */
                        for (int i_16 = 3; i_16 < 7; i_16 += 3) /* same iter space */
                        {
                            var_42 ^= ((/* implicit */unsigned long long int) var_14);
                            arr_61 [i_1] [i_1] [i_10] [i_12] [6U] [(short)2] [i_16] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(2044889780))))));
                            arr_62 [i_12] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) <= (((1186412781U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)23505)))))));
                            arr_63 [i_12] [i_16] [i_12] [i_11] [i_1] [i_12] = ((/* implicit */long long int) arr_40 [i_16 - 2] [i_11 + 2]);
                        }
                        for (int i_17 = 3; i_17 < 7; i_17 += 3) /* same iter space */
                        {
                            var_43 *= ((/* implicit */long long int) var_3);
                            arr_66 [i_1] [i_12] [i_11] [i_12] [i_17] = (+(((/* implicit */int) ((((/* implicit */int) arr_53 [i_11] [8LL] [i_11 + 1] [i_10] [i_10 + 1] [i_12])) < (((/* implicit */int) var_8))))));
                        }
                        for (unsigned int i_18 = 0; i_18 < 11; i_18 += 3) 
                        {
                            arr_70 [i_12] [i_10] [i_12] = ((/* implicit */long long int) 2996620445U);
                            var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) (+(min((((/* implicit */long long int) (_Bool)1)), (-3562322524838708870LL))))))));
                        }
                        for (unsigned short i_19 = 0; i_19 < 11; i_19 += 2) 
                        {
                            arr_73 [i_1] [i_1] [i_1] [i_12] [i_1] [i_1] = ((/* implicit */short) (unsigned char)27);
                            arr_74 [i_19] [i_12] [i_12] [i_12] [i_10] [i_1] = ((/* implicit */short) (signed char)-103);
                            var_45 = ((/* implicit */int) max((var_45), (((((/* implicit */_Bool) (-(((unsigned int) var_9))))) ? ((+(((((/* implicit */_Bool) arr_29 [i_1] [i_11] [i_11] [i_11] [i_19])) ? (((/* implicit */int) arr_32 [i_10] [i_19])) : (arr_21 [i_1] [i_1] [i_11 - 1] [i_12] [(signed char)1] [i_12]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)102)))))))));
                            var_46 = ((/* implicit */unsigned long long int) (+(3382027172292919542LL)));
                        }
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_20 = 0; i_20 < 11; i_20 += 1) 
            {
                for (long long int i_21 = 4; i_21 < 10; i_21 += 4) 
                {
                    for (unsigned long long int i_22 = 0; i_22 < 11; i_22 += 3) 
                    {
                        {
                            var_47 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_1))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_10 - 2] [i_10] [i_10 - 1])) ? (arr_16 [i_10] [i_10] [i_10]) : (arr_16 [i_1] [i_1] [i_1])))) : (((((/* implicit */_Bool) var_18)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            arr_82 [i_20] [i_10] [i_1] = ((/* implicit */short) (+(var_18)));
                            arr_83 [i_21] [i_21] [i_21] [i_20] [i_10] [i_1] = ((/* implicit */_Bool) ((min((16177824075699300696ULL), (((/* implicit */unsigned long long int) arr_23 [i_10] [i_10] [i_21 + 1] [i_21] [i_22] [i_22])))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-18428)))))));
                            var_48 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)4064))) <= (((((/* implicit */_Bool) ((signed char) var_18))) ? (((unsigned long long int) arr_65 [i_1] [i_1] [i_20] [i_21] [i_22])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)113)))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_23 = 0; i_23 < 11; i_23 += 2) 
            {
                for (signed char i_24 = 0; i_24 < 11; i_24 += 4) 
                {
                    {
                        arr_91 [i_23] [i_10] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -2472761040401170520LL)), (max((2390494082070549706ULL), (((/* implicit */unsigned long long int) arr_77 [i_10 - 1] [i_10 - 1] [i_10 - 2] [i_10]))))));
                        var_49 = ((/* implicit */short) (-(((/* implicit */int) (signed char)(-127 - 1)))));
                        var_50 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) (~(var_17)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) var_3)), ((unsigned char)197))))) : (((var_18) & (((/* implicit */unsigned int) -1056924496)))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)68)))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                for (long long int i_26 = 0; i_26 < 11; i_26 += 4) 
                {
                    {
                        var_51 |= ((((/* implicit */_Bool) (~(min((1056924495), (((/* implicit */int) arr_20 [i_1] [i_1] [i_25]))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 14488166647041933886ULL)) ? (var_10) : (arr_16 [i_1] [i_10] [i_10])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (-3562322524838708870LL)))) : (arr_29 [i_1] [5LL] [(_Bool)1] [i_26] [i_10]))) : (16056249991639001935ULL));
                        arr_97 [i_26] [i_1] = min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))))), ((~(3113688349U))));
                        var_52 = ((/* implicit */long long int) ((((-13) + (2147483647))) << (((((/* implicit */int) (short)32767)) - (32767)))));
                        var_53 = ((/* implicit */unsigned char) var_2);
                        var_54 = ((/* implicit */unsigned int) max((var_54), (((/* implicit */unsigned int) arr_87 [i_1] [i_10 - 1] [i_25] [i_26] [i_10]))));
                    }
                } 
            } 
        }
    }
    for (short i_27 = 0; i_27 < 19; i_27 += 1) 
    {
        var_55 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((+(2390494082070549706ULL)))))) ? ((+(((/* implicit */int) arr_98 [i_27])))) : (var_10)));
        var_56 = ((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) (unsigned char)212))))));
        var_57 -= ((/* implicit */unsigned long long int) (unsigned short)28267);
        arr_100 [i_27] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned int) (unsigned char)230))), ((((_Bool)1) ? (((/* implicit */long long int) 183046836U)) : (334728330268209413LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)14), (((/* implicit */unsigned char) ((_Bool) (short)7990))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_98 [i_27])) ? (((/* implicit */long long int) ((/* implicit */int) arr_98 [i_27]))) : (8285359820059853448LL)))) ? (max((((/* implicit */unsigned int) (short)19036)), (0U))) : (((/* implicit */unsigned int) var_17))))));
        var_58 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) ^ (334728330268209407LL)))) ? (((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) var_7)))) : (min((var_17), (((/* implicit */int) arr_98 [i_27]))))))));
    }
}
