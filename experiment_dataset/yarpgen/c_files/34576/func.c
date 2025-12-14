/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34576
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
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (((-(-1LL))) + (min((var_0), (((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */long long int) 1051860772)))))))))));
    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((var_1) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) << (((((((/* implicit */_Bool) 293039309)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-98))))) - (9328516655782216101ULL))))))));
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) -1051860781)))) && (((/* implicit */_Bool) min((((/* implicit */long long int) 2147483647)), (((((/* implicit */_Bool) -272384471)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)98))) : (var_2)))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [4ULL] [i_1 + 1] [4ULL] |= ((signed char) arr_0 [i_0] [i_1]);
                /* LoopSeq 4 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    var_16 = ((/* implicit */long long int) max((var_16), (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(signed char)8] [(signed char)8])) ? (2984947497730120071LL) : (((/* implicit */long long int) 1051860772))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-7LL)))))) ? (min((((long long int) arr_3 [i_0])), (((/* implicit */long long int) (signed char)-111)))) : (var_12)))));
                    arr_9 [6LL] &= ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((signed char) max((12990924926924547554ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL)))))) : (((/* implicit */int) (_Bool)1)));
                }
                for (long long int i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 1) 
                    {
                        var_17 -= ((unsigned char) (_Bool)1);
                        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((signed char) var_8)))));
                        var_19 = ((/* implicit */long long int) ((signed char) arr_12 [i_0 - 1] [i_0 - 1] [i_1 - 2] [i_4] [i_4] [i_4 + 2]));
                    }
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) var_7))));
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_0 [i_0 - 1] [i_1]) : (((/* implicit */long long int) var_3))))) ? ((~(((/* implicit */int) (signed char)33)))) : ((~(((/* implicit */int) (_Bool)1))))))) % (-18014398509481984LL))))));
                    arr_14 [i_3] [i_0] [i_0] [i_3] |= ((/* implicit */_Bool) max((((/* implicit */long long int) arr_10 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 + 1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -3201414545198955448LL)) ? (3407489443819560781LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-4)))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (((((/* implicit */_Bool) var_7)) ? (3407489443819560781LL) : (0LL)))))));
                }
                for (long long int i_5 = 0; i_5 < 12; i_5 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        for (long long int i_7 = 1; i_7 < 11; i_7 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)30))));
                                var_23 -= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_7 [7] [7] [i_6])) ? (((((/* implicit */_Bool) -1410308136036408021LL)) ? (arr_19 [i_7 + 1] [i_6] [i_5] [(signed char)0] [7ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14))))) : (((((/* implicit */unsigned long long int) -6958754041082023979LL)) + (4802410781899663972ULL)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((arr_4 [6LL]) ? (((/* implicit */long long int) ((int) (signed char)4))) : (((arr_4 [0LL]) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [4LL]))) : (var_9))))))));
                        var_25 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_23 [i_0 + 1] [i_0 + 1] [i_0 - 1] [8LL]) : (((/* implicit */long long int) arr_3 [4U]))));
                        var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) (-((((-(arr_16 [i_0] [i_1] [(_Bool)1] [i_1]))) / (((var_6) ^ (var_9))))))))));
                        arr_25 [i_8] [(_Bool)1] [8LL] [(_Bool)1] [i_0] |= ((/* implicit */_Bool) (+(arr_18 [i_0 - 1] [i_0 - 1] [(signed char)9] [i_8])));
                    }
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) 986023390))));
                }
                /* vectorizable */
                for (long long int i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
                {
                    var_28 *= ((/* implicit */_Bool) var_2);
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((unsigned long long int) arr_21 [i_0] [(_Bool)1] [i_0 + 1] [i_9]))));
                }
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    for (long long int i_11 = 2; i_11 < 8; i_11 += 1) 
                    {
                        {
                            var_30 -= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (+(arr_5 [i_0] [(signed char)0])))))) ? ((+(13644333291809887616ULL))) : (min((4802410781899663972ULL), (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1] [11LL] [11LL]))))));
                            var_31 ^= ((/* implicit */int) ((13845940925379903892ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_8)) ^ (var_7)))) ? (((arr_28 [i_0] [i_0] [i_10] [(_Bool)1]) ? (-7LL) : (((/* implicit */long long int) arr_21 [4LL] [i_1] [i_10] [i_11 - 1])))) : (var_2))))));
                            var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) var_4))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */int) min((var_2), (((/* implicit */long long int) (-(arr_15 [i_1 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]))))));
                /* LoopSeq 2 */
                for (unsigned long long int i_12 = 1; i_12 < 9; i_12 += 3) /* same iter space */
                {
                    var_34 = ((/* implicit */unsigned long long int) max((var_34), (((((/* implicit */unsigned long long int) arr_20 [10])) + (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)99))) - (4802410781899663999ULL)))))));
                    var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) arr_13 [(_Bool)1] [1LL] [i_12] [i_12 + 2] [i_1 + 1] [i_12 + 2]))));
                    var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((-6676634650270285570LL) + (9223372036854775807LL))) >> (((-1) + (57))))))));
                    var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_13 [i_12] [i_12 - 1] [i_0 - 1] [i_0] [i_0] [0]) | (var_11)))) || (((/* implicit */_Bool) ((unsigned char) var_6))))))));
                    var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) arr_21 [i_0] [(signed char)6] [1U] [0LL]))));
                }
                for (unsigned long long int i_13 = 1; i_13 < 9; i_13 += 3) /* same iter space */
                {
                    var_39 &= ((((/* implicit */int) (signed char)-46)) / (((int) ((((/* implicit */_Bool) 5016570601946319591LL)) ? (1217785490092491851LL) : (3312351984417816169LL)))));
                    var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) var_7))));
                    var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) ((((/* implicit */_Bool) 4122129890U)) || (((/* implicit */_Bool) -1217785490092491846LL))))) : ((-(((/* implicit */int) var_1)))))))));
                    var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((4122129890U) * (arr_32 [i_0 + 1] [i_0 + 1] [4] [(signed char)0] [8LL])))) : (((((/* implicit */_Bool) var_7)) ? (-2561561762640717755LL) : (var_4)))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_5))))))))));
                }
            }
        } 
    } 
}
