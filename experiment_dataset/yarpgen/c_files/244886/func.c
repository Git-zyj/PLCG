/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244886
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
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (signed char)38))));
                    var_20 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) (~(1804187296205065174LL)))) % (arr_6 [(signed char)4]))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-95))))) < ((+(var_13))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((2692461160U), (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))))))));
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) (((((!(((/* implicit */_Bool) arr_2 [i_0])))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10)))) <= ((+(((/* implicit */int) (signed char)40)))))))));
        var_23 *= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)9307))) <= (var_2)));
        var_24 += ((/* implicit */short) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-40))) - (var_6)))))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
    {
        var_25 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_9)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (3292886749U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-9307))))))));
        var_26 &= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 2325794518422991810LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_10 [i_3])))), (((((var_17) + (2147483647))) << (((6369796113847705850LL) - (6369796113847705850LL)))))))) ? (((((/* implicit */_Bool) (unsigned short)25794)) ? (((/* implicit */unsigned long long int) 1002080547U)) : (2711304872580352967ULL))) : (((/* implicit */unsigned long long int) (+(arr_0 [i_3]))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
    {
        var_27 += ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (short)27541))) + (var_16))) / ((+(arr_12 [i_4])))));
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 3) 
        {
            for (short i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    {
                        var_28 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)45)) ? (((/* implicit */long long int) 2129545119U)) : (var_18)))) ? (((var_6) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13104))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) 7180424)))) ? (511LL) : (-6369796113847705855LL)))));
                        var_29 &= ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-13075))) <= (((((/* implicit */_Bool) 6369796113847705867LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)9304))) : (var_16))))))) + (4808157210236631011LL)));
                        var_30 = arr_7 [i_6] [i_4];
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
    {
        var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_8])))))));
        var_32 = ((/* implicit */int) max((var_32), (((((/* implicit */int) arr_19 [i_8] [i_8] [i_8])) ^ (((/* implicit */int) arr_19 [i_8] [i_8] [i_8]))))));
        /* LoopSeq 1 */
        for (long long int i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) arr_8 [i_8] [i_8]))));
            var_34 *= ((/* implicit */short) ((((var_18) != (arr_11 [i_9]))) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (var_1)));
            /* LoopNest 2 */
            for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
            {
                for (long long int i_11 = 0; i_11 < 24; i_11 += 1) 
                {
                    {
                        var_35 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (2052921795209903819LL) : (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))));
                        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((arr_8 [i_8] [i_10]) << (((arr_6 [i_8]) - (17072955652331839899ULL))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 3) 
                        {
                            var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) (-(var_6))))));
                            var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)24900)) ? (1002080539U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-35))))))));
                        }
                        for (short i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            var_39 &= ((/* implicit */int) arr_28 [i_8] [i_10] [i_10] [17LL]);
                            var_40 ^= ((/* implicit */short) (!(((/* implicit */_Bool) -4830554031374631038LL))));
                            arr_39 [i_13] [i_11] [i_10] [i_10] [(signed char)2] [(unsigned char)10] |= ((/* implicit */long long int) (+(7484221927923184517ULL)));
                        }
                        var_41 = ((/* implicit */short) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) var_12))));
                        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_8] [i_9] [i_10] [i_11])) ? (((/* implicit */int) arr_5 [i_8] [i_8] [i_8])) : (((/* implicit */int) arr_5 [i_8] [i_9] [i_10]))));
                    }
                } 
            } 
            var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) arr_28 [i_8] [i_8] [i_8] [i_8]))));
            var_44 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((15863541959200549313ULL) ^ (((/* implicit */unsigned long long int) 18014398509481952LL)))))));
        }
    }
    var_45 = ((/* implicit */short) max((var_45), (var_12)));
}
