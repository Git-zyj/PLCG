/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54348
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
    var_19 |= ((/* implicit */unsigned char) 0LL);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            arr_7 [12ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)56708))) | (var_18)))) && (((/* implicit */_Bool) 8086822083383850715LL))));
            var_20 = ((/* implicit */signed char) (~(-1LL)));
            var_21 -= ((((/* implicit */int) (!(((/* implicit */_Bool) -25LL))))) >= (((/* implicit */int) (unsigned short)8827)));
            arr_8 [i_1] = ((/* implicit */long long int) (+(938427263U)));
        }
        for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            var_22 = ((((/* implicit */int) arr_10 [i_0] [i_2])) / (((((/* implicit */_Bool) 1979415562)) ? ((-(((/* implicit */int) (unsigned short)8827)))) : ((+(((/* implicit */int) (unsigned short)56724)))))));
            var_23 = ((/* implicit */long long int) ((((((/* implicit */int) arr_2 [i_0] [i_2])) != (((/* implicit */int) (unsigned short)65535)))) ? (max((938427252U), (((/* implicit */unsigned int) arr_5 [i_0] [i_2])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_2])))));
            var_24 = ((/* implicit */signed char) arr_0 [i_0]);
            arr_13 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_10 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)3585)))), (((/* implicit */int) ((((/* implicit */_Bool) 938427252U)) || (var_12))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */int) arr_11 [i_0])) != (((/* implicit */int) (_Bool)1)))))))) : (arr_6 [i_0])));
        }
        var_25 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) == (var_6))) ? (((arr_12 [i_0] [i_0]) / (((/* implicit */int) (unsigned short)3585)))) : (((((/* implicit */_Bool) 938427237U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (signed char)126))))));
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) (unsigned short)8828)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)4605))))) ? (938427249U) : (((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61951))) : (var_3)))))) : (((((/* implicit */_Bool) max((-690968199), (((/* implicit */int) (unsigned short)56708))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3356540032U)))))) : (-7708750575342326633LL))))))));
        var_27 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_12 [i_0] [i_0])))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [(unsigned char)2]))) * (-1LL)))))))) != ((-(((arr_11 [i_0]) ? (938427263U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))))));
        var_28 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (6304860084845661288LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))));
    }
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
    {
        arr_17 [i_3] = ((/* implicit */long long int) (signed char)-35);
        var_29 = 690968199;
        var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((int) -1LL)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)15148)) : (((/* implicit */int) var_11))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((3509018802U), (arr_6 [0U])))) && (((3509018802U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(unsigned short)8]))))))))) : (((long long int) ((_Bool) arr_3 [i_3]))))))));
        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_3] [i_3])) && ((_Bool)0)))) * (((/* implicit */int) ((var_17) <= (((/* implicit */long long int) 4007498920U)))))))))))));
    }
    for (unsigned short i_4 = 0; i_4 < 13; i_4 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 2; i_5 < 9; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                {
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (_Bool)1)), (arr_14 [i_5 + 1])))) ? (((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)0))))) : (((/* implicit */int) (_Bool)1))))) ? ((-(((-2342801553663524101LL) / (((/* implicit */long long int) arr_12 [i_5 - 1] [9])))))) : (((/* implicit */long long int) max((max((((/* implicit */unsigned int) arr_19 [i_4] [i_4])), (553258945U))), (((/* implicit */unsigned int) (unsigned short)8828)))))));
                    var_33 = ((/* implicit */unsigned long long int) min((((min((287468376U), (((/* implicit */unsigned int) (unsigned short)56708)))) >> (((1583755328783623771LL) - (1583755328783623748LL))))), (((/* implicit */unsigned int) var_14))));
                }
            } 
        } 
        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) var_1))));
    }
    var_35 = ((/* implicit */unsigned short) min((var_8), (((/* implicit */unsigned int) ((unsigned char) var_9)))));
}
